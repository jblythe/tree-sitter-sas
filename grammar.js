const input_list = (_) => /[_a-zA-Z][_a-zA-Z0-9]*/;

module.exports = grammar({
  name: 'sas',

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._statement),

    /** ************************************************************************
    *                              Keywords
    * ************************************************************************* */

    _keyword_data: (_) => kw('DATA'),
    _keyword_set: (_) => kw('SET'),
    _keyword_merge: (_) => kw('MERGE'),
    _keyword_if: (_) => kw('IF'),
    _keyword_by: (_) => kw('BY'),
    _keyword_output: (_) => kw('OUTPUT'),
    _keyword_run: (_) => kw('RUN'),
    _keyword_in: (_) => kw('IN'),
    _keyword_rename: (_) => kw('RENAME'),
    _keyword_keep: (_) => kw('KEEP'),
    _keyword_drop: (_) => kw('DROP'),
    _keyword_drop: (_) => kw('FIRST'),
    _keyword_drop: (_) => kw('LAST'),

    /** ************************************************************************
    *                              Statements
    * ************************************************************************* */

    _statement: ($) =>
      seq(
        choice(
          $.data_step,
        )
      ),

    /** ************************************************************************
    *                      PROCEDURAL LANGUAGE
    * ************************************************************************* */


    data_step: ($) =>
      seq(
        $.data_statement,
        optional(
          choice(
            $.set_statement,
            $.merge_statement,
          ),
        ),
        $.run_statement
      ),

    data_statement: ($) =>
      seq(
        $._keyword_data,
        seq(
          repeat1($.table)
        ),
        ';',
      ),

    set_statement: ($) =>
      seq(
        $._keyword_set,
        seq(
          repeat1($.table)
        ),
        ';',
        optional($.by_statement),
    ),

    merge_statement: ($) =>
      seq(
        $._keyword_merge,
        seq(repeat1($.table)),
        ';',
        $.by_statement,
    ),

    run_statement: ($) =>
      seq(
        $._keyword_run,
        ';',
      ),

    by_statement: ($) =>
      seq(
        $._keyword_by,
        seq(spaceSep($._input_list)),
        ';',
    ),


    /** ************************************************************************
    *                      Input/Output Table Identifiers
    * ************************************************************************* */

    in_statement: ($) =>
      prec.left(2, seq(
        $._keyword_in,
        optional(" "),
        '=',
        $._input_list,
        optional(" "),
      )),

    rename_statement: ($) =>
      prec.left(5, seq(
        $._keyword_rename,
        optional(" "),
        '=',
        optional(" "),
        '(',
        repeat1(
          seq(
            optional(" "),
            $.rename_col,
            optional(" "),
          ),
        ),
        ')',
        optional(" "),
        optional(
          choice(
            "keep",
            "drop",
            "in",
            "rename"
          ),
        ),
      )),

    rename_col: ($) =>
      prec.left(2, seq(
        $._input_list,
        optional(" "),
        "=",
        optional(" "),
        $._input_list,
      )),

    drop_keep_statement: ($) =>
      prec.left(5, seq(
        choice(
          $._keyword_drop,
          $._keyword_keep,
        ),
        optional(" "),
        '=',
        $._input_list,
        optional(" "),
        optional(
          choice(
            "keep",
            "drop",
            "in",
            "rename"
          ),
        ),
      )),

    _input_list: input_list,

    /** ************************************************************************
    *                      Table Definitions
    * ************************************************************************* */

    table: ($) =>
      choice(
        $.table_with_opts,
        $.standard_table,
      ),

    standard_table: ($) =>
      seq(
        $._input_list,
        optional(" "),
      ),

    table_with_opts: ($) =>
      seq(
        $._input_list,
        optional(" "),
        '(',
        repeat1(
          seq(
            optional(" "),
            choice($.in_statement, $.rename_statement, $.drop_keep_statement),
            optional(" "),
          ),
        ),
        ')',
      ),

  }

});

function kw(keyword) {
  if (keyword.toUpperCase() != keyword) {
    throw new Error(`Expected upper case keyword got ${keyword}`);
  }
  const words = keyword.split(' ');
  const regExps = words.map(createCaseInsensitiveRegex);

  if (regExps.length == 1) {
    return alias(regExps[0], keyword);
  } else {
    return alias(seq(...regExps), keyword.replace(/ /g, '_'));
  }
}

function createCaseInsensitiveRegex(word) {
  return new RegExp(
    word
      .split('')
      .map((letter) => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join(''),
  );
}

function spaceSep(rule) {
  return sep1(rule, ' ');
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
