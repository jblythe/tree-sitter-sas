#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__keyword_data_token1 = 1,
  aux_sym__keyword_set_token1 = 2,
  aux_sym__keyword_merge_token1 = 3,
  aux_sym__keyword_if_token1 = 4,
  aux_sym__keyword_by_token1 = 5,
  aux_sym__keyword_output_token1 = 6,
  aux_sym__keyword_run_token1 = 7,
  aux_sym__keyword_in_token1 = 8,
  aux_sym__keyword_rename_token1 = 9,
  aux_sym__keyword_keep_token1 = 10,
  aux_sym__keyword_drop_token1 = 11,
  anon_sym_SEMI = 12,
  anon_sym_ = 13,
  anon_sym_EQ = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_keep = 17,
  anon_sym_drop = 18,
  anon_sym_in = 19,
  anon_sym_rename = 20,
  sym__input_list = 21,
  sym_source_file = 22,
  sym__keyword_data = 23,
  sym__keyword_set = 24,
  sym__keyword_merge = 25,
  sym__keyword_by = 26,
  sym__keyword_run = 27,
  sym__keyword_in = 28,
  sym__keyword_rename = 29,
  sym__keyword_keep = 30,
  sym__keyword_drop = 31,
  sym__statement = 32,
  sym_data_step = 33,
  sym_data_statement = 34,
  sym_set_statement = 35,
  sym_merge_statement = 36,
  sym_run_statement = 37,
  sym_by_statement = 38,
  sym_in_statement = 39,
  sym_rename_statement = 40,
  sym_rename_col = 41,
  sym_drop_keep_statement = 42,
  sym_table = 43,
  sym_standard_table = 44,
  sym_table_with_opts = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_data_statement_repeat1 = 47,
  aux_sym_by_statement_repeat1 = 48,
  aux_sym_rename_statement_repeat1 = 49,
  aux_sym_table_with_opts_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__keyword_data_token1] = "DATA",
  [aux_sym__keyword_set_token1] = "SET",
  [aux_sym__keyword_merge_token1] = "MERGE",
  [aux_sym__keyword_if_token1] = "IF",
  [aux_sym__keyword_by_token1] = "BY",
  [aux_sym__keyword_output_token1] = "OUTPUT",
  [aux_sym__keyword_run_token1] = "RUN",
  [aux_sym__keyword_in_token1] = "IN",
  [aux_sym__keyword_rename_token1] = "RENAME",
  [aux_sym__keyword_keep_token1] = "KEEP",
  [aux_sym__keyword_drop_token1] = "DROP",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_keep] = "keep",
  [anon_sym_drop] = "drop",
  [anon_sym_in] = "in",
  [anon_sym_rename] = "rename",
  [sym__input_list] = "_input_list",
  [sym_source_file] = "source_file",
  [sym__keyword_data] = "_keyword_data",
  [sym__keyword_set] = "_keyword_set",
  [sym__keyword_merge] = "_keyword_merge",
  [sym__keyword_by] = "_keyword_by",
  [sym__keyword_run] = "_keyword_run",
  [sym__keyword_in] = "_keyword_in",
  [sym__keyword_rename] = "_keyword_rename",
  [sym__keyword_keep] = "_keyword_keep",
  [sym__keyword_drop] = "_keyword_drop",
  [sym__statement] = "_statement",
  [sym_data_step] = "data_step",
  [sym_data_statement] = "data_statement",
  [sym_set_statement] = "set_statement",
  [sym_merge_statement] = "merge_statement",
  [sym_run_statement] = "run_statement",
  [sym_by_statement] = "by_statement",
  [sym_in_statement] = "in_statement",
  [sym_rename_statement] = "rename_statement",
  [sym_rename_col] = "rename_col",
  [sym_drop_keep_statement] = "drop_keep_statement",
  [sym_table] = "table",
  [sym_standard_table] = "standard_table",
  [sym_table_with_opts] = "table_with_opts",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_data_statement_repeat1] = "data_statement_repeat1",
  [aux_sym_by_statement_repeat1] = "by_statement_repeat1",
  [aux_sym_rename_statement_repeat1] = "rename_statement_repeat1",
  [aux_sym_table_with_opts_repeat1] = "table_with_opts_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__keyword_data_token1] = aux_sym__keyword_data_token1,
  [aux_sym__keyword_set_token1] = aux_sym__keyword_set_token1,
  [aux_sym__keyword_merge_token1] = aux_sym__keyword_merge_token1,
  [aux_sym__keyword_if_token1] = aux_sym__keyword_if_token1,
  [aux_sym__keyword_by_token1] = aux_sym__keyword_by_token1,
  [aux_sym__keyword_output_token1] = aux_sym__keyword_output_token1,
  [aux_sym__keyword_run_token1] = aux_sym__keyword_run_token1,
  [aux_sym__keyword_in_token1] = aux_sym__keyword_in_token1,
  [aux_sym__keyword_rename_token1] = aux_sym__keyword_rename_token1,
  [aux_sym__keyword_keep_token1] = aux_sym__keyword_keep_token1,
  [aux_sym__keyword_drop_token1] = aux_sym__keyword_drop_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_keep] = anon_sym_keep,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_rename] = anon_sym_rename,
  [sym__input_list] = sym__input_list,
  [sym_source_file] = sym_source_file,
  [sym__keyword_data] = sym__keyword_data,
  [sym__keyword_set] = sym__keyword_set,
  [sym__keyword_merge] = sym__keyword_merge,
  [sym__keyword_by] = sym__keyword_by,
  [sym__keyword_run] = sym__keyword_run,
  [sym__keyword_in] = sym__keyword_in,
  [sym__keyword_rename] = sym__keyword_rename,
  [sym__keyword_keep] = sym__keyword_keep,
  [sym__keyword_drop] = sym__keyword_drop,
  [sym__statement] = sym__statement,
  [sym_data_step] = sym_data_step,
  [sym_data_statement] = sym_data_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_merge_statement] = sym_merge_statement,
  [sym_run_statement] = sym_run_statement,
  [sym_by_statement] = sym_by_statement,
  [sym_in_statement] = sym_in_statement,
  [sym_rename_statement] = sym_rename_statement,
  [sym_rename_col] = sym_rename_col,
  [sym_drop_keep_statement] = sym_drop_keep_statement,
  [sym_table] = sym_table,
  [sym_standard_table] = sym_standard_table,
  [sym_table_with_opts] = sym_table_with_opts,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_data_statement_repeat1] = aux_sym_data_statement_repeat1,
  [aux_sym_by_statement_repeat1] = aux_sym_by_statement_repeat1,
  [aux_sym_rename_statement_repeat1] = aux_sym_rename_statement_repeat1,
  [aux_sym_table_with_opts_repeat1] = aux_sym_table_with_opts_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__keyword_data_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_set_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_merge_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_if_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_by_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_output_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_run_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_in_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_rename_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_keep_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_drop_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
    .visible = true,
    .named = false,
  },
  [sym__input_list] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_data] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_set] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_merge] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_by] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_run] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_in] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_rename] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_keep] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_drop] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_data_step] = {
    .visible = true,
    .named = true,
  },
  [sym_data_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_merge_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_run_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_by_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_in_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rename_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rename_col] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_keep_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_with_opts] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_by_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rename_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_with_opts_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == 'K') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'K') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'k') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__keyword_data_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__keyword_set_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__keyword_merge_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__keyword_if_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__keyword_by_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__keyword_output_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__keyword_run_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__keyword_in_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__keyword_rename_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__keyword_keep_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__keyword_drop_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_keep);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__input_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__keyword_data_token1] = ACTIONS(1),
    [aux_sym__keyword_set_token1] = ACTIONS(1),
    [aux_sym__keyword_merge_token1] = ACTIONS(1),
    [aux_sym__keyword_if_token1] = ACTIONS(1),
    [aux_sym__keyword_by_token1] = ACTIONS(1),
    [aux_sym__keyword_output_token1] = ACTIONS(1),
    [aux_sym__keyword_run_token1] = ACTIONS(1),
    [aux_sym__keyword_in_token1] = ACTIONS(1),
    [aux_sym__keyword_rename_token1] = ACTIONS(1),
    [aux_sym__keyword_keep_token1] = ACTIONS(1),
    [aux_sym__keyword_drop_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_keep] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym__keyword_data] = STATE(39),
    [sym__statement] = STATE(14),
    [sym_data_step] = STATE(14),
    [sym_data_statement] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__keyword_data_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      aux_sym__keyword_in_token1,
    ACTIONS(10), 1,
      aux_sym__keyword_rename_token1,
    ACTIONS(16), 1,
      anon_sym_,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_table_with_opts_repeat1,
    STATE(60), 1,
      sym__keyword_in,
    STATE(74), 1,
      sym__keyword_rename,
    ACTIONS(13), 2,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
    STATE(64), 2,
      sym__keyword_keep,
      sym__keyword_drop,
    STATE(28), 3,
      sym_in_statement,
      sym_rename_statement,
      sym_drop_keep_statement,
  [35] = 10,
    ACTIONS(21), 1,
      aux_sym__keyword_in_token1,
    ACTIONS(23), 1,
      aux_sym__keyword_rename_token1,
    ACTIONS(27), 1,
      anon_sym_,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_table_with_opts_repeat1,
    STATE(60), 1,
      sym__keyword_in,
    STATE(74), 1,
      sym__keyword_rename,
    ACTIONS(25), 2,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
    STATE(64), 2,
      sym__keyword_keep,
      sym__keyword_drop,
    STATE(28), 3,
      sym_in_statement,
      sym_rename_statement,
      sym_drop_keep_statement,
  [70] = 10,
    ACTIONS(21), 1,
      aux_sym__keyword_in_token1,
    ACTIONS(23), 1,
      aux_sym__keyword_rename_token1,
    ACTIONS(27), 1,
      anon_sym_,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_table_with_opts_repeat1,
    STATE(60), 1,
      sym__keyword_in,
    STATE(74), 1,
      sym__keyword_rename,
    ACTIONS(25), 2,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
    STATE(64), 2,
      sym__keyword_keep,
      sym__keyword_drop,
    STATE(28), 3,
      sym_in_statement,
      sym_rename_statement,
      sym_drop_keep_statement,
  [105] = 9,
    ACTIONS(21), 1,
      aux_sym__keyword_in_token1,
    ACTIONS(23), 1,
      aux_sym__keyword_rename_token1,
    ACTIONS(27), 1,
      anon_sym_,
    STATE(4), 1,
      aux_sym_table_with_opts_repeat1,
    STATE(60), 1,
      sym__keyword_in,
    STATE(74), 1,
      sym__keyword_rename,
    ACTIONS(25), 2,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
    STATE(64), 2,
      sym__keyword_keep,
      sym__keyword_drop,
    STATE(28), 3,
      sym_in_statement,
      sym_rename_statement,
      sym_drop_keep_statement,
  [137] = 9,
    ACTIONS(21), 1,
      aux_sym__keyword_in_token1,
    ACTIONS(23), 1,
      aux_sym__keyword_rename_token1,
    ACTIONS(27), 1,
      anon_sym_,
    STATE(3), 1,
      aux_sym_table_with_opts_repeat1,
    STATE(60), 1,
      sym__keyword_in,
    STATE(74), 1,
      sym__keyword_rename,
    ACTIONS(25), 2,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
    STATE(64), 2,
      sym__keyword_keep,
      sym__keyword_drop,
    STATE(28), 3,
      sym_in_statement,
      sym_rename_statement,
      sym_drop_keep_statement,
  [169] = 7,
    ACTIONS(33), 1,
      aux_sym__keyword_in_token1,
    ACTIONS(35), 1,
      aux_sym__keyword_rename_token1,
    STATE(60), 1,
      sym__keyword_in,
    STATE(74), 1,
      sym__keyword_rename,
    ACTIONS(37), 2,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
    STATE(64), 2,
      sym__keyword_keep,
      sym__keyword_drop,
    STATE(17), 3,
      sym_in_statement,
      sym_rename_statement,
      sym_drop_keep_statement,
  [195] = 3,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 4,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_in,
      anon_sym_rename,
    ACTIONS(39), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [212] = 3,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 4,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_in,
      anon_sym_rename,
    ACTIONS(45), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [229] = 3,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(55), 4,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_in,
      anon_sym_rename,
    ACTIONS(51), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [246] = 3,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(61), 4,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_in,
      anon_sym_rename,
    ACTIONS(57), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [263] = 3,
    ACTIONS(65), 1,
      anon_sym_,
    ACTIONS(67), 4,
      anon_sym_keep,
      anon_sym_drop,
      anon_sym_in,
      anon_sym_rename,
    ACTIONS(63), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [280] = 8,
    ACTIONS(69), 1,
      aux_sym__keyword_set_token1,
    ACTIONS(71), 1,
      aux_sym__keyword_merge_token1,
    ACTIONS(73), 1,
      aux_sym__keyword_run_token1,
    STATE(36), 1,
      sym__keyword_set,
    STATE(37), 1,
      sym__keyword_merge,
    STATE(59), 1,
      sym_run_statement,
    STATE(89), 1,
      sym__keyword_run,
    STATE(49), 2,
      sym_set_statement,
      sym_merge_statement,
  [306] = 5,
    ACTIONS(5), 1,
      aux_sym__keyword_data_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_data_statement,
    STATE(39), 1,
      sym__keyword_data,
    STATE(15), 3,
      sym__statement,
      sym_data_step,
      aux_sym_source_file_repeat1,
  [324] = 5,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym__keyword_data_token1,
    STATE(13), 1,
      sym_data_statement,
    STATE(39), 1,
      sym__keyword_data,
    STATE(15), 3,
      sym__statement,
      sym_data_step,
      aux_sym_source_file_repeat1,
  [342] = 2,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(45), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [353] = 2,
    ACTIONS(82), 1,
      anon_sym_,
    ACTIONS(19), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [364] = 4,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      sym__input_list,
    STATE(18), 2,
      sym_table,
      aux_sym_data_statement_repeat1,
    STATE(62), 2,
      sym_standard_table,
      sym_table_with_opts,
  [379] = 4,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      sym__input_list,
    STATE(18), 2,
      sym_table,
      aux_sym_data_statement_repeat1,
    STATE(62), 2,
      sym_standard_table,
      sym_table_with_opts,
  [394] = 4,
    ACTIONS(92), 1,
      sym__input_list,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    STATE(18), 2,
      sym_table,
      aux_sym_data_statement_repeat1,
    STATE(62), 2,
      sym_standard_table,
      sym_table_with_opts,
  [409] = 2,
    ACTIONS(98), 1,
      anon_sym_,
    ACTIONS(96), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [420] = 2,
    ACTIONS(102), 1,
      anon_sym_,
    ACTIONS(100), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [431] = 2,
    ACTIONS(106), 1,
      anon_sym_,
    ACTIONS(104), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [442] = 2,
    ACTIONS(65), 1,
      anon_sym_,
    ACTIONS(63), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [453] = 2,
    ACTIONS(110), 1,
      anon_sym_,
    ACTIONS(108), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [464] = 2,
    ACTIONS(114), 1,
      anon_sym_,
    ACTIONS(112), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [475] = 2,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(116), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [486] = 2,
    ACTIONS(122), 1,
      anon_sym_,
    ACTIONS(120), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [497] = 2,
    ACTIONS(127), 1,
      anon_sym_,
    ACTIONS(125), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [508] = 2,
    ACTIONS(129), 1,
      anon_sym_,
    ACTIONS(19), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [519] = 4,
    ACTIONS(92), 1,
      sym__input_list,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(18), 2,
      sym_table,
      aux_sym_data_statement_repeat1,
    STATE(62), 2,
      sym_standard_table,
      sym_table_with_opts,
  [534] = 2,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(57), 5,
      aux_sym__keyword_in_token1,
      aux_sym__keyword_rename_token1,
      aux_sym__keyword_keep_token1,
      aux_sym__keyword_drop_token1,
      anon_sym_RPAREN,
  [545] = 5,
    ACTIONS(133), 1,
      anon_sym_,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      sym__input_list,
    STATE(33), 1,
      aux_sym_rename_statement_repeat1,
    STATE(58), 1,
      sym_rename_col,
  [561] = 5,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      sym__input_list,
    STATE(33), 1,
      aux_sym_rename_statement_repeat1,
    STATE(58), 1,
      sym_rename_col,
  [577] = 5,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(145), 1,
      sym__input_list,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_rename_statement_repeat1,
    STATE(58), 1,
      sym_rename_col,
  [593] = 3,
    ACTIONS(92), 1,
      sym__input_list,
    STATE(19), 2,
      sym_table,
      aux_sym_data_statement_repeat1,
    STATE(62), 2,
      sym_standard_table,
      sym_table_with_opts,
  [605] = 3,
    ACTIONS(92), 1,
      sym__input_list,
    STATE(20), 2,
      sym_table,
      aux_sym_data_statement_repeat1,
    STATE(62), 2,
      sym_standard_table,
      sym_table_with_opts,
  [617] = 5,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(145), 1,
      sym__input_list,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_rename_statement_repeat1,
    STATE(58), 1,
      sym_rename_col,
  [633] = 3,
    ACTIONS(92), 1,
      sym__input_list,
    STATE(31), 2,
      sym_table,
      aux_sym_data_statement_repeat1,
    STATE(62), 2,
      sym_standard_table,
      sym_table_with_opts,
  [645] = 4,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(145), 1,
      sym__input_list,
    STATE(35), 1,
      aux_sym_rename_statement_repeat1,
    STATE(58), 1,
      sym_rename_col,
  [658] = 4,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(145), 1,
      sym__input_list,
    STATE(38), 1,
      aux_sym_rename_statement_repeat1,
    STATE(58), 1,
      sym_rename_col,
  [671] = 3,
    ACTIONS(153), 1,
      anon_sym_,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 2,
      anon_sym_SEMI,
      sym__input_list,
  [682] = 4,
    ACTIONS(157), 1,
      aux_sym__keyword_by_token1,
    ACTIONS(159), 1,
      aux_sym__keyword_run_token1,
    STATE(76), 1,
      sym__keyword_by,
    STATE(77), 1,
      sym_by_statement,
  [695] = 4,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(145), 1,
      sym__input_list,
    STATE(34), 1,
      aux_sym_rename_statement_repeat1,
    STATE(58), 1,
      sym_rename_col,
  [708] = 1,
    ACTIONS(161), 3,
      aux_sym__keyword_set_token1,
      aux_sym__keyword_merge_token1,
      aux_sym__keyword_run_token1,
  [714] = 3,
    ACTIONS(157), 1,
      aux_sym__keyword_by_token1,
    STATE(76), 1,
      sym__keyword_by,
    STATE(93), 1,
      sym_by_statement,
  [724] = 2,
    ACTIONS(163), 1,
      anon_sym_,
    ACTIONS(165), 2,
      anon_sym_RPAREN,
      sym__input_list,
  [732] = 2,
    ACTIONS(167), 1,
      anon_sym_,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      sym__input_list,
  [740] = 3,
    ACTIONS(73), 1,
      aux_sym__keyword_run_token1,
    STATE(70), 1,
      sym_run_statement,
    STATE(89), 1,
      sym__keyword_run,
  [750] = 2,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(136), 2,
      anon_sym_RPAREN,
      sym__input_list,
  [758] = 2,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 2,
      anon_sym_SEMI,
      sym__input_list,
  [766] = 2,
    ACTIONS(178), 1,
      anon_sym_,
    ACTIONS(180), 2,
      anon_sym_RPAREN,
      sym__input_list,
  [774] = 2,
    ACTIONS(182), 1,
      anon_sym_,
    ACTIONS(184), 2,
      anon_sym_RPAREN,
      sym__input_list,
  [782] = 3,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym_by_statement_repeat1,
  [792] = 2,
    ACTIONS(191), 1,
      anon_sym_,
    ACTIONS(136), 2,
      anon_sym_RPAREN,
      sym__input_list,
  [800] = 3,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(195), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym_by_statement_repeat1,
  [810] = 3,
    ACTIONS(195), 1,
      anon_sym_,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_by_statement_repeat1,
  [820] = 2,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(202), 2,
      anon_sym_RPAREN,
      sym__input_list,
  [828] = 1,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      aux_sym__keyword_data_token1,
  [833] = 2,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(208), 1,
      anon_sym_EQ,
  [840] = 1,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      sym__input_list,
  [845] = 1,
    ACTIONS(212), 2,
      anon_sym_SEMI,
      sym__input_list,
  [850] = 2,
    ACTIONS(214), 1,
      anon_sym_,
    ACTIONS(216), 1,
      anon_sym_EQ,
  [857] = 2,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(220), 1,
      anon_sym_EQ,
  [864] = 2,
    ACTIONS(222), 1,
      anon_sym_,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
  [871] = 2,
    ACTIONS(226), 1,
      anon_sym_,
    ACTIONS(228), 1,
      sym__input_list,
  [878] = 1,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym__keyword_data_token1,
  [883] = 2,
    ACTIONS(232), 1,
      anon_sym_,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
  [890] = 1,
    ACTIONS(236), 2,
      anon_sym_SEMI,
      sym__input_list,
  [895] = 1,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      aux_sym__keyword_data_token1,
  [900] = 2,
    ACTIONS(240), 1,
      sym__input_list,
    STATE(50), 1,
      sym_rename_col,
  [907] = 2,
    ACTIONS(242), 1,
      anon_sym_,
    ACTIONS(244), 1,
      sym__input_list,
  [914] = 2,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      anon_sym_,
  [921] = 2,
    ACTIONS(248), 1,
      anon_sym_,
    ACTIONS(250), 1,
      anon_sym_EQ,
  [928] = 1,
    ACTIONS(252), 1,
      sym__input_list,
  [932] = 1,
    ACTIONS(254), 1,
      sym__input_list,
  [936] = 1,
    ACTIONS(256), 1,
      aux_sym__keyword_run_token1,
  [940] = 1,
    ACTIONS(258), 1,
      aux_sym__keyword_run_token1,
  [944] = 1,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
  [948] = 1,
    ACTIONS(262), 1,
      anon_sym_EQ,
  [952] = 1,
    ACTIONS(264), 1,
      anon_sym_EQ,
  [956] = 1,
    ACTIONS(266), 1,
      sym__input_list,
  [960] = 1,
    ACTIONS(268), 1,
      sym__input_list,
  [964] = 1,
    ACTIONS(270), 1,
      sym__input_list,
  [968] = 1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
  [972] = 1,
    ACTIONS(274), 1,
      aux_sym__keyword_run_token1,
  [976] = 1,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [980] = 1,
    ACTIONS(278), 1,
      sym__input_list,
  [984] = 1,
    ACTIONS(280), 1,
      anon_sym_SEMI,
  [988] = 1,
    ACTIONS(282), 1,
      sym__input_list,
  [992] = 1,
    ACTIONS(284), 1,
      anon_sym_EQ,
  [996] = 1,
    ACTIONS(286), 1,
      sym__input_list,
  [1000] = 1,
    ACTIONS(288), 1,
      aux_sym__keyword_run_token1,
  [1004] = 1,
    ACTIONS(290), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 229,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 324,
  [SMALL_STATE(16)] = 342,
  [SMALL_STATE(17)] = 353,
  [SMALL_STATE(18)] = 364,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 394,
  [SMALL_STATE(21)] = 409,
  [SMALL_STATE(22)] = 420,
  [SMALL_STATE(23)] = 431,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 453,
  [SMALL_STATE(26)] = 464,
  [SMALL_STATE(27)] = 475,
  [SMALL_STATE(28)] = 486,
  [SMALL_STATE(29)] = 497,
  [SMALL_STATE(30)] = 508,
  [SMALL_STATE(31)] = 519,
  [SMALL_STATE(32)] = 534,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 561,
  [SMALL_STATE(35)] = 577,
  [SMALL_STATE(36)] = 593,
  [SMALL_STATE(37)] = 605,
  [SMALL_STATE(38)] = 617,
  [SMALL_STATE(39)] = 633,
  [SMALL_STATE(40)] = 645,
  [SMALL_STATE(41)] = 658,
  [SMALL_STATE(42)] = 671,
  [SMALL_STATE(43)] = 682,
  [SMALL_STATE(44)] = 695,
  [SMALL_STATE(45)] = 708,
  [SMALL_STATE(46)] = 714,
  [SMALL_STATE(47)] = 724,
  [SMALL_STATE(48)] = 732,
  [SMALL_STATE(49)] = 740,
  [SMALL_STATE(50)] = 750,
  [SMALL_STATE(51)] = 758,
  [SMALL_STATE(52)] = 766,
  [SMALL_STATE(53)] = 774,
  [SMALL_STATE(54)] = 782,
  [SMALL_STATE(55)] = 792,
  [SMALL_STATE(56)] = 800,
  [SMALL_STATE(57)] = 810,
  [SMALL_STATE(58)] = 820,
  [SMALL_STATE(59)] = 828,
  [SMALL_STATE(60)] = 833,
  [SMALL_STATE(61)] = 840,
  [SMALL_STATE(62)] = 845,
  [SMALL_STATE(63)] = 850,
  [SMALL_STATE(64)] = 857,
  [SMALL_STATE(65)] = 864,
  [SMALL_STATE(66)] = 871,
  [SMALL_STATE(67)] = 878,
  [SMALL_STATE(68)] = 883,
  [SMALL_STATE(69)] = 890,
  [SMALL_STATE(70)] = 895,
  [SMALL_STATE(71)] = 900,
  [SMALL_STATE(72)] = 907,
  [SMALL_STATE(73)] = 914,
  [SMALL_STATE(74)] = 921,
  [SMALL_STATE(75)] = 928,
  [SMALL_STATE(76)] = 932,
  [SMALL_STATE(77)] = 936,
  [SMALL_STATE(78)] = 940,
  [SMALL_STATE(79)] = 944,
  [SMALL_STATE(80)] = 948,
  [SMALL_STATE(81)] = 952,
  [SMALL_STATE(82)] = 956,
  [SMALL_STATE(83)] = 960,
  [SMALL_STATE(84)] = 964,
  [SMALL_STATE(85)] = 968,
  [SMALL_STATE(86)] = 972,
  [SMALL_STATE(87)] = 976,
  [SMALL_STATE(88)] = 980,
  [SMALL_STATE(89)] = 984,
  [SMALL_STATE(90)] = 988,
  [SMALL_STATE(91)] = 992,
  [SMALL_STATE(92)] = 996,
  [SMALL_STATE(93)] = 1000,
  [SMALL_STATE(94)] = 1004,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_with_opts_repeat1, 2), SHIFT_REPEAT(60),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_with_opts_repeat1, 2), SHIFT_REPEAT(74),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_with_opts_repeat1, 2), SHIFT_REPEAT(64),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_with_opts_repeat1, 2), SHIFT_REPEAT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_with_opts_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_keep_statement, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keep_statement, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_keep_statement, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keep_statement, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_statement, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_statement, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_statement, 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_statement, 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_statement, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_statement, 6),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_with_opts_repeat1, 2), SHIFT_REPEAT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_statement_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_statement_repeat1, 2), SHIFT_REPEAT(42),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_keep_statement, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keep_statement, 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_with_opts_repeat1, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_with_opts_repeat1, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_statement, 9),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_statement, 9),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drop_keep_statement, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_keep_statement, 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_statement, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_statement, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_statement, 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_statement, 8),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_with_opts_repeat1, 1),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_with_opts_repeat1, 1), SHIFT_REPEAT(30),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_statement, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_statement, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_with_opts_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rename_statement_repeat1, 2), SHIFT_REPEAT(71),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rename_statement_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rename_statement_repeat1, 2), SHIFT_REPEAT(63),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_table, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_statement, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_col, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_col, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_col, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_col, 4),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rename_statement_repeat1, 2), SHIFT_REPEAT(53),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_table, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_col, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rename_col, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rename_statement_repeat1, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rename_statement_repeat1, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_by_statement_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_by_statement_repeat1, 2), SHIFT_REPEAT(83),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rename_statement_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rename_statement_repeat1, 1), SHIFT_REPEAT(55),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rename_statement_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_step, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_with_opts, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_with_opts, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_step, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_by_statement_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_by_statement, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_by_statement, 3),
  [276] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_statement, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sas(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
