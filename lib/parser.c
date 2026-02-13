#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 428
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 61
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 70

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  anon_sym_COLON = 14,
  aux_sym_user_name_or_group_token1 = 15,
  aux_sym_immediate_user_name_or_group_fragment_token1 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym_stopsignal_value_token1 = 23,
  aux_sym_stopsignal_value_token2 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  anon_sym_NONE = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_maintainer_instruction_token2 = 29,
  aux_sym_cross_build_instruction_token1 = 30,
  aux_sym_path_token1 = 31,
  aux_sym_path_token2 = 32,
  aux_sym_path_token3 = 33,
  aux_sym_path_with_heredoc_token1 = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_DOLLAR2 = 36,
  anon_sym_LBRACE = 37,
  aux_sym_expansion_body_token1 = 38,
  anon_sym_RBRACE = 39,
  sym_variable = 40,
  aux_sym_spaced_env_pair_token1 = 41,
  aux_sym_env_key_token1 = 42,
  aux_sym_expose_port_token1 = 43,
  anon_sym_SLASHtcp = 44,
  anon_sym_SLASHudp = 45,
  aux_sym_label_pair_token1 = 46,
  aux_sym_image_name_token1 = 47,
  aux_sym_image_name_token2 = 48,
  aux_sym_image_tag_token1 = 49,
  anon_sym_AT = 50,
  aux_sym_image_digest_token1 = 51,
  anon_sym_DASH_DASH = 52,
  aux_sym_param_token1 = 53,
  aux_sym_param_token2 = 54,
  anon_sym_mount = 55,
  anon_sym_COMMA = 56,
  aux_sym_mount_param_param_token1 = 57,
  aux_sym_image_alias_token1 = 58,
  aux_sym_image_alias_token2 = 59,
  aux_sym_shell_fragment_token1 = 60,
  aux_sym_shell_fragment_token2 = 61,
  aux_sym_shell_fragment_token3 = 62,
  aux_sym_shell_fragment_token4 = 63,
  sym_line_continuation = 64,
  sym_required_line_continuation = 65,
  anon_sym_LBRACK = 66,
  anon_sym_COMMA2 = 67,
  anon_sym_RBRACK = 68,
  anon_sym_DQUOTE = 69,
  aux_sym_json_string_token1 = 70,
  sym_json_escape_sequence = 71,
  aux_sym_double_quoted_string_token1 = 72,
  anon_sym_BSLASH = 73,
  anon_sym_SQUOTE = 74,
  aux_sym_single_quoted_string_token1 = 75,
  aux_sym_unquoted_string_token1 = 76,
  anon_sym_BSLASH2 = 77,
  sym_double_quoted_escape_sequence = 78,
  sym_single_quoted_escape_sequence = 79,
  sym_non_newline_whitespace = 80,
  sym_comment = 81,
  sym_semgrep_metavariable = 82,
  sym_semgrep_ellipsis = 83,
  sym_heredoc_marker = 84,
  sym_heredoc_line = 85,
  sym_heredoc_end = 86,
  sym_heredoc_nl = 87,
  sym_error_sentinel = 88,
  sym_source_file = 89,
  sym_instruction = 90,
  sym_from_instruction = 91,
  sym_run_instruction = 92,
  sym_cmd_instruction = 93,
  sym_label_instruction = 94,
  sym_expose_instruction = 95,
  sym_env_instruction = 96,
  sym_add_instruction = 97,
  sym_copy_instruction = 98,
  sym_entrypoint_instruction = 99,
  sym_volume_instruction = 100,
  sym_user_instruction = 101,
  sym_user_name_or_group = 102,
  sym_immediate_user_name_or_group = 103,
  sym_immediate_user_name_or_group_fragment = 104,
  sym_workdir_instruction = 105,
  sym_arg_instruction = 106,
  sym_onbuild_instruction = 107,
  sym_stopsignal_instruction = 108,
  sym_stopsignal_value = 109,
  sym_healthcheck_instruction = 110,
  sym_shell_instruction = 111,
  sym_maintainer_instruction = 112,
  sym_cross_build_instruction = 113,
  sym_heredoc_block = 114,
  sym_path = 115,
  sym_path_with_heredoc = 116,
  sym_expansion = 117,
  sym_immediate_expansion = 118,
  sym_imm_expansion = 119,
  sym_expansion_body = 120,
  sym_env_pair = 121,
  sym_spaced_env_pair = 122,
  sym_env_key = 123,
  sym_expose_port = 124,
  sym_label_pair = 125,
  sym_image_spec = 126,
  sym_image_name = 127,
  sym_image_tag = 128,
  sym_image_digest = 129,
  sym_param = 130,
  sym_flag_param = 131,
  sym_mount_param = 132,
  sym_mount_param_param = 133,
  sym_image_alias = 134,
  sym_shell_command = 135,
  sym_shell_fragment = 136,
  sym_json_string_array = 137,
  sym_json_string = 138,
  sym_double_quoted_string = 139,
  sym_single_quoted_string = 140,
  sym_unquoted_string = 141,
  sym_array_element = 142,
  aux_sym_source_file_repeat1 = 143,
  aux_sym_run_instruction_repeat1 = 144,
  aux_sym_run_instruction_repeat2 = 145,
  aux_sym_label_instruction_repeat1 = 146,
  aux_sym_expose_instruction_repeat1 = 147,
  aux_sym_env_instruction_repeat1 = 148,
  aux_sym_add_instruction_repeat1 = 149,
  aux_sym_add_instruction_repeat2 = 150,
  aux_sym_volume_instruction_repeat1 = 151,
  aux_sym_user_name_or_group_repeat1 = 152,
  aux_sym_stopsignal_value_repeat1 = 153,
  aux_sym_healthcheck_instruction_repeat1 = 154,
  aux_sym_heredoc_block_repeat1 = 155,
  aux_sym_path_repeat1 = 156,
  aux_sym_image_name_repeat1 = 157,
  aux_sym_image_tag_repeat1 = 158,
  aux_sym_image_digest_repeat1 = 159,
  aux_sym_mount_param_repeat1 = 160,
  aux_sym_image_alias_repeat1 = 161,
  aux_sym_shell_command_repeat1 = 162,
  aux_sym_shell_fragment_repeat1 = 163,
  aux_sym_json_string_array_repeat1 = 164,
  aux_sym_json_string_repeat1 = 165,
  aux_sym_double_quoted_string_repeat1 = 166,
  aux_sym_single_quoted_string_repeat1 = 167,
  aux_sym_unquoted_string_repeat1 = 168,
  alias_sym_imm_tok_at = 169,
  alias_sym_imm_tok_bslashspace = 170,
  alias_sym_imm_tok_colon = 171,
  alias_sym_imm_tok_comma = 172,
  alias_sym_imm_tok_dollar = 173,
  alias_sym_imm_tok_eq = 174,
  alias_sym_imm_tok_lcurl = 175,
  alias_sym_imm_tok_mount = 176,
  alias_sym_imm_tok_pat_0ab9261 = 177,
  alias_sym_imm_tok_pat_0c7fc22 = 178,
  alias_sym_imm_tok_pat_2b37705 = 179,
  alias_sym_imm_tok_pat_3a2a380 = 180,
  alias_sym_imm_tok_pat_3d340f6 = 181,
  alias_sym_imm_tok_pat_441cd81 = 182,
  alias_sym_imm_tok_pat_589b0f8 = 183,
  alias_sym_imm_tok_pat_7642c4f = 184,
  alias_sym_imm_tok_pat_8713919 = 185,
  alias_sym_imm_tok_pat_9a14b5c = 186,
  alias_sym_imm_tok_pat_9f6bbb9 = 187,
  alias_sym_imm_tok_pat_bcfc287 = 188,
  alias_sym_imm_tok_pat_d2727a0 = 189,
  alias_sym_imm_tok_pat_f43f746 = 190,
  alias_sym_imm_tok_pat_f46f69d = 191,
  alias_sym_imm_tok_pat_f6e1de8 = 192,
  alias_sym_imm_tok_rcurl = 193,
  alias_sym_pat_05444c2 = 194,
  alias_sym_pat_0851d06 = 195,
  alias_sym_pat_2b6adbc = 196,
  alias_sym_pat_4128122 = 197,
  alias_sym_pat_441cd81 = 198,
  alias_sym_pat_4a2f38a = 199,
  alias_sym_pat_4de4cb9 = 200,
  alias_sym_pat_4fd4a56 = 201,
  alias_sym_pat_8165e5f = 202,
  alias_sym_pat_9873c86 = 203,
  alias_sym_pat_9a14b5c = 204,
  alias_sym_pat_a667757 = 205,
  alias_sym_pat_add = 206,
  alias_sym_pat_arg = 207,
  alias_sym_pat_as = 208,
  alias_sym_pat_b1120d3 = 209,
  alias_sym_pat_cmd = 210,
  alias_sym_pat_copy = 211,
  alias_sym_pat_e0f3805 = 212,
  alias_sym_pat_ea34a52 = 213,
  alias_sym_pat_eda9032 = 214,
  alias_sym_pat_entr = 215,
  alias_sym_pat_env = 216,
  alias_sym_pat_expose = 217,
  alias_sym_pat_f8ab07f = 218,
  alias_sym_pat_from = 219,
  alias_sym_pat_heal = 220,
  alias_sym_pat_label = 221,
  alias_sym_pat_main = 222,
  alias_sym_pat_onbu = 223,
  alias_sym_pat_run = 224,
  alias_sym_pat_shell = 225,
  alias_sym_pat_stop = 226,
  alias_sym_pat_user = 227,
  alias_sym_pat_volume = 228,
  alias_sym_pat_work = 229,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "from_instruction_token1",
  [aux_sym_from_instruction_token2] = "from_instruction_token2",
  [aux_sym_run_instruction_token1] = "run_instruction_token1",
  [aux_sym_cmd_instruction_token1] = "cmd_instruction_token1",
  [aux_sym_label_instruction_token1] = "label_instruction_token1",
  [aux_sym_expose_instruction_token1] = "expose_instruction_token1",
  [aux_sym_env_instruction_token1] = "env_instruction_token1",
  [aux_sym_add_instruction_token1] = "add_instruction_token1",
  [aux_sym_copy_instruction_token1] = "copy_instruction_token1",
  [aux_sym_entrypoint_instruction_token1] = "entrypoint_instruction_token1",
  [aux_sym_volume_instruction_token1] = "volume_instruction_token1",
  [aux_sym_user_instruction_token1] = "user_instruction_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_user_name_or_group_token1] = "user_name_or_group_token1",
  [aux_sym_immediate_user_name_or_group_fragment_token1] = "immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "workdir_instruction_token1",
  [aux_sym_arg_instruction_token1] = "arg_instruction_token1",
  [aux_sym_arg_instruction_token2] = "arg_instruction_token2",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "onbuild_instruction_token1",
  [aux_sym_stopsignal_instruction_token1] = "stopsignal_instruction_token1",
  [aux_sym_stopsignal_value_token1] = "stopsignal_value_token1",
  [aux_sym_stopsignal_value_token2] = "stopsignal_value_token2",
  [aux_sym_healthcheck_instruction_token1] = "healthcheck_instruction_token1",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "shell_instruction_token1",
  [aux_sym_maintainer_instruction_token1] = "maintainer_instruction_token1",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "cross_build_instruction_token1",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_path_token3] = "path_token3",
  [aux_sym_path_with_heredoc_token1] = "path_with_heredoc_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_body_token1] = "expansion_body_token1",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym_spaced_env_pair_token1] = "spaced_env_pair_token1",
  [aux_sym_env_key_token1] = "env_key_token1",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "label_pair_token1",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [aux_sym_shell_fragment_token4] = "shell_fragment_token4",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_token1] = "json_string_token1",
  [sym_json_escape_sequence] = "json_escape_sequence",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "double_quoted_escape_sequence",
  [sym_single_quoted_escape_sequence] = "single_quoted_escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_heredoc_marker] = "heredoc_marker",
  [sym_heredoc_line] = "heredoc_line",
  [sym_heredoc_end] = "heredoc_end",
  [sym_heredoc_nl] = "heredoc_nl",
  [sym_error_sentinel] = "error_sentinel",
  [sym_source_file] = "source_file",
  [sym_instruction] = "instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym_user_name_or_group] = "user_name_or_group",
  [sym_immediate_user_name_or_group] = "immediate_user_name_or_group",
  [sym_immediate_user_name_or_group_fragment] = "immediate_user_name_or_group_fragment",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym_stopsignal_value] = "stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_heredoc_block] = "heredoc_block",
  [sym_path] = "path",
  [sym_path_with_heredoc] = "path_with_heredoc",
  [sym_expansion] = "expansion",
  [sym_immediate_expansion] = "immediate_expansion",
  [sym_imm_expansion] = "imm_expansion",
  [sym_expansion_body] = "expansion_body",
  [sym_env_pair] = "env_pair",
  [sym_spaced_env_pair] = "spaced_env_pair",
  [sym_env_key] = "env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_flag_param] = "flag_param",
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_image_alias] = "image_alias",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_array_element] = "array_element",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_run_instruction_repeat2] = "run_instruction_repeat2",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
  [aux_sym_add_instruction_repeat2] = "add_instruction_repeat2",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_user_name_or_group_repeat1] = "user_name_or_group_repeat1",
  [aux_sym_stopsignal_value_repeat1] = "stopsignal_value_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_heredoc_block_repeat1] = "heredoc_block_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [alias_sym_imm_tok_at] = "imm_tok_at",
  [alias_sym_imm_tok_bslashspace] = "imm_tok_bslashspace",
  [alias_sym_imm_tok_colon] = "imm_tok_colon",
  [alias_sym_imm_tok_comma] = "imm_tok_comma",
  [alias_sym_imm_tok_dollar] = "imm_tok_dollar",
  [alias_sym_imm_tok_eq] = "imm_tok_eq",
  [alias_sym_imm_tok_lcurl] = "imm_tok_lcurl",
  [alias_sym_imm_tok_mount] = "imm_tok_mount",
  [alias_sym_imm_tok_pat_0ab9261] = "imm_tok_pat_0ab9261",
  [alias_sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [alias_sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [alias_sym_imm_tok_pat_3a2a380] = "imm_tok_pat_3a2a380",
  [alias_sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [alias_sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [alias_sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [alias_sym_imm_tok_pat_7642c4f] = "imm_tok_pat_7642c4f",
  [alias_sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [alias_sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [alias_sym_imm_tok_pat_9f6bbb9] = "imm_tok_pat_9f6bbb9",
  [alias_sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [alias_sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [alias_sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [alias_sym_imm_tok_pat_f46f69d] = "imm_tok_pat_f46f69d",
  [alias_sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [alias_sym_imm_tok_rcurl] = "imm_tok_rcurl",
  [alias_sym_pat_05444c2] = "pat_05444c2",
  [alias_sym_pat_0851d06] = "pat_0851d06",
  [alias_sym_pat_2b6adbc] = "pat_2b6adbc",
  [alias_sym_pat_4128122] = "pat_4128122",
  [alias_sym_pat_441cd81] = "pat_441cd81",
  [alias_sym_pat_4a2f38a] = "pat_4a2f38a",
  [alias_sym_pat_4de4cb9] = "pat_4de4cb9",
  [alias_sym_pat_4fd4a56] = "pat_4fd4a56",
  [alias_sym_pat_8165e5f] = "pat_8165e5f",
  [alias_sym_pat_9873c86] = "pat_9873c86",
  [alias_sym_pat_9a14b5c] = "pat_9a14b5c",
  [alias_sym_pat_a667757] = "pat_a667757",
  [alias_sym_pat_add] = "pat_add",
  [alias_sym_pat_arg] = "pat_arg",
  [alias_sym_pat_as] = "pat_as",
  [alias_sym_pat_b1120d3] = "pat_b1120d3",
  [alias_sym_pat_cmd] = "pat_cmd",
  [alias_sym_pat_copy] = "pat_copy",
  [alias_sym_pat_e0f3805] = "pat_e0f3805",
  [alias_sym_pat_ea34a52] = "pat_ea34a52",
  [alias_sym_pat_eda9032] = "pat_eda9032",
  [alias_sym_pat_entr] = "pat_entr",
  [alias_sym_pat_env] = "pat_env",
  [alias_sym_pat_expose] = "pat_expose",
  [alias_sym_pat_f8ab07f] = "pat_f8ab07f",
  [alias_sym_pat_from] = "pat_from",
  [alias_sym_pat_heal] = "pat_heal",
  [alias_sym_pat_label] = "pat_label",
  [alias_sym_pat_main] = "pat_main",
  [alias_sym_pat_onbu] = "pat_onbu",
  [alias_sym_pat_run] = "pat_run",
  [alias_sym_pat_shell] = "pat_shell",
  [alias_sym_pat_stop] = "pat_stop",
  [alias_sym_pat_user] = "pat_user",
  [alias_sym_pat_volume] = "pat_volume",
  [alias_sym_pat_work] = "pat_work",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_user_name_or_group_token1] = aux_sym_user_name_or_group_token1,
  [aux_sym_immediate_user_name_or_group_fragment_token1] = aux_sym_immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = aux_sym_arg_instruction_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym_stopsignal_value_token1] = aux_sym_stopsignal_value_token1,
  [aux_sym_stopsignal_value_token2] = aux_sym_stopsignal_value_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [aux_sym_path_token3] = aux_sym_path_token3,
  [aux_sym_path_with_heredoc_token1] = aux_sym_path_with_heredoc_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_body_token1] = aux_sym_expansion_body_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym_spaced_env_pair_token1] = aux_sym_spaced_env_pair_token1,
  [aux_sym_env_key_token1] = aux_sym_env_key_token1,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = aux_sym_label_pair_token1,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [aux_sym_shell_fragment_token4] = aux_sym_shell_fragment_token4,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_token1] = aux_sym_json_string_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_single_quoted_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_heredoc_marker] = sym_heredoc_marker,
  [sym_heredoc_line] = sym_heredoc_line,
  [sym_heredoc_end] = sym_heredoc_end,
  [sym_heredoc_nl] = sym_heredoc_nl,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym_instruction] = sym_instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym_user_name_or_group] = sym_user_name_or_group,
  [sym_immediate_user_name_or_group] = sym_immediate_user_name_or_group,
  [sym_immediate_user_name_or_group_fragment] = sym_immediate_user_name_or_group_fragment,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym_stopsignal_value] = sym_stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_heredoc_block] = sym_heredoc_block,
  [sym_path] = sym_path,
  [sym_path_with_heredoc] = sym_path_with_heredoc,
  [sym_expansion] = sym_expansion,
  [sym_immediate_expansion] = sym_immediate_expansion,
  [sym_imm_expansion] = sym_imm_expansion,
  [sym_expansion_body] = sym_expansion_body,
  [sym_env_pair] = sym_env_pair,
  [sym_spaced_env_pair] = sym_spaced_env_pair,
  [sym_env_key] = sym_env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_flag_param] = sym_flag_param,
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_image_alias] = sym_image_alias,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_array_element] = sym_array_element,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_run_instruction_repeat2] = aux_sym_run_instruction_repeat2,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
  [aux_sym_add_instruction_repeat2] = aux_sym_add_instruction_repeat2,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_user_name_or_group_repeat1] = aux_sym_user_name_or_group_repeat1,
  [aux_sym_stopsignal_value_repeat1] = aux_sym_stopsignal_value_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_heredoc_block_repeat1] = aux_sym_heredoc_block_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [alias_sym_imm_tok_at] = alias_sym_imm_tok_at,
  [alias_sym_imm_tok_bslashspace] = alias_sym_imm_tok_bslashspace,
  [alias_sym_imm_tok_colon] = alias_sym_imm_tok_colon,
  [alias_sym_imm_tok_comma] = alias_sym_imm_tok_comma,
  [alias_sym_imm_tok_dollar] = alias_sym_imm_tok_dollar,
  [alias_sym_imm_tok_eq] = alias_sym_imm_tok_eq,
  [alias_sym_imm_tok_lcurl] = alias_sym_imm_tok_lcurl,
  [alias_sym_imm_tok_mount] = alias_sym_imm_tok_mount,
  [alias_sym_imm_tok_pat_0ab9261] = alias_sym_imm_tok_pat_0ab9261,
  [alias_sym_imm_tok_pat_0c7fc22] = alias_sym_imm_tok_pat_0c7fc22,
  [alias_sym_imm_tok_pat_2b37705] = alias_sym_imm_tok_pat_2b37705,
  [alias_sym_imm_tok_pat_3a2a380] = alias_sym_imm_tok_pat_3a2a380,
  [alias_sym_imm_tok_pat_3d340f6] = alias_sym_imm_tok_pat_3d340f6,
  [alias_sym_imm_tok_pat_441cd81] = alias_sym_imm_tok_pat_441cd81,
  [alias_sym_imm_tok_pat_589b0f8] = alias_sym_imm_tok_pat_589b0f8,
  [alias_sym_imm_tok_pat_7642c4f] = alias_sym_imm_tok_pat_7642c4f,
  [alias_sym_imm_tok_pat_8713919] = alias_sym_imm_tok_pat_8713919,
  [alias_sym_imm_tok_pat_9a14b5c] = alias_sym_imm_tok_pat_9a14b5c,
  [alias_sym_imm_tok_pat_9f6bbb9] = alias_sym_imm_tok_pat_9f6bbb9,
  [alias_sym_imm_tok_pat_bcfc287] = alias_sym_imm_tok_pat_bcfc287,
  [alias_sym_imm_tok_pat_d2727a0] = alias_sym_imm_tok_pat_d2727a0,
  [alias_sym_imm_tok_pat_f43f746] = alias_sym_imm_tok_pat_f43f746,
  [alias_sym_imm_tok_pat_f46f69d] = alias_sym_imm_tok_pat_f46f69d,
  [alias_sym_imm_tok_pat_f6e1de8] = alias_sym_imm_tok_pat_f6e1de8,
  [alias_sym_imm_tok_rcurl] = alias_sym_imm_tok_rcurl,
  [alias_sym_pat_05444c2] = alias_sym_pat_05444c2,
  [alias_sym_pat_0851d06] = alias_sym_pat_0851d06,
  [alias_sym_pat_2b6adbc] = alias_sym_pat_2b6adbc,
  [alias_sym_pat_4128122] = alias_sym_pat_4128122,
  [alias_sym_pat_441cd81] = alias_sym_pat_441cd81,
  [alias_sym_pat_4a2f38a] = alias_sym_pat_4a2f38a,
  [alias_sym_pat_4de4cb9] = alias_sym_pat_4de4cb9,
  [alias_sym_pat_4fd4a56] = alias_sym_pat_4fd4a56,
  [alias_sym_pat_8165e5f] = alias_sym_pat_8165e5f,
  [alias_sym_pat_9873c86] = alias_sym_pat_9873c86,
  [alias_sym_pat_9a14b5c] = alias_sym_pat_9a14b5c,
  [alias_sym_pat_a667757] = alias_sym_pat_a667757,
  [alias_sym_pat_add] = alias_sym_pat_add,
  [alias_sym_pat_arg] = alias_sym_pat_arg,
  [alias_sym_pat_as] = alias_sym_pat_as,
  [alias_sym_pat_b1120d3] = alias_sym_pat_b1120d3,
  [alias_sym_pat_cmd] = alias_sym_pat_cmd,
  [alias_sym_pat_copy] = alias_sym_pat_copy,
  [alias_sym_pat_e0f3805] = alias_sym_pat_e0f3805,
  [alias_sym_pat_ea34a52] = alias_sym_pat_ea34a52,
  [alias_sym_pat_eda9032] = alias_sym_pat_eda9032,
  [alias_sym_pat_entr] = alias_sym_pat_entr,
  [alias_sym_pat_env] = alias_sym_pat_env,
  [alias_sym_pat_expose] = alias_sym_pat_expose,
  [alias_sym_pat_f8ab07f] = alias_sym_pat_f8ab07f,
  [alias_sym_pat_from] = alias_sym_pat_from,
  [alias_sym_pat_heal] = alias_sym_pat_heal,
  [alias_sym_pat_label] = alias_sym_pat_label,
  [alias_sym_pat_main] = alias_sym_pat_main,
  [alias_sym_pat_onbu] = alias_sym_pat_onbu,
  [alias_sym_pat_run] = alias_sym_pat_run,
  [alias_sym_pat_shell] = alias_sym_pat_shell,
  [alias_sym_pat_stop] = alias_sym_pat_stop,
  [alias_sym_pat_user] = alias_sym_pat_user,
  [alias_sym_pat_volume] = alias_sym_pat_volume,
  [alias_sym_pat_work] = alias_sym_pat_work,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_user_name_or_group_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_with_heredoc_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_non_newline_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_nl] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_user_name_or_group_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_path_with_heredoc] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion_body] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heredoc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_imm_tok_at] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_bslashspace] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_colon] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_comma] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_dollar] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_eq] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_lcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_mount] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0ab9261] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3a2a380] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_7642c4f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9f6bbb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f46f69d] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_rcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_05444c2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_0851d06] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_2b6adbc] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_8165e5f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9873c86] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_a667757] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_add] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_arg] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_as] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_b1120d3] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_cmd] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_copy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_e0f3805] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_ea34a52] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_eda9032] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_entr] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_env] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_expose] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_f8ab07f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_from] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_heal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_label] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_main] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_onbu] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_run] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_shell] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_stop] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_user] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_volume] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_work] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [20] = {.index = 1, .length = 1},
  [22] = {.index = 2, .length = 1},
  [23] = {.index = 2, .length = 1},
  [32] = {.index = 3, .length = 2},
  [33] = {.index = 5, .length = 2},
  [37] = {.index = 0, .length = 1},
  [39] = {.index = 2, .length = 1},
  [46] = {.index = 7, .length = 1},
  [51] = {.index = 8, .length = 3},
  [55] = {.index = 11, .length = 2},
  [56] = {.index = 11, .length = 2},
  [57] = {.index = 13, .length = 2},
  [58] = {.index = 13, .length = 2},
  [59] = {.index = 15, .length = 2},
  [60] = {.index = 17, .length = 2},
  [61] = {.index = 17, .length = 2},
  [63] = {.index = 19, .length = 2},
  [65] = {.index = 21, .length = 1},
  [66] = {.index = 19, .length = 2},
  [67] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_user, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_as, 3},
  [8] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [11] =
    {field_key, 0},
    {field_value, 2},
  [13] =
    {field_name, 0},
    {field_value, 2},
  [15] =
    {field_group, 3},
    {field_user, 1},
  [17] =
    {field_default, 3},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
  [22] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_pat_8165e5f,
  },
  [2] = {
    [0] = alias_sym_pat_from,
  },
  [4] = {
    [0] = alias_sym_pat_a667757,
  },
  [5] = {
    [0] = alias_sym_pat_b1120d3,
  },
  [6] = {
    [0] = alias_sym_pat_f8ab07f,
  },
  [7] = {
    [0] = alias_sym_pat_eda9032,
  },
  [8] = {
    [0] = alias_sym_pat_run,
  },
  [9] = {
    [0] = alias_sym_pat_cmd,
  },
  [10] = {
    [0] = alias_sym_pat_label,
  },
  [11] = {
    [0] = alias_sym_pat_e0f3805,
  },
  [12] = {
    [0] = alias_sym_pat_expose,
  },
  [13] = {
    [0] = alias_sym_pat_2b6adbc,
  },
  [14] = {
    [0] = alias_sym_pat_env,
  },
  [15] = {
    [0] = alias_sym_pat_9873c86,
  },
  [16] = {
    [0] = alias_sym_pat_0851d06,
  },
  [17] = {
    [0] = alias_sym_pat_entr,
  },
  [18] = {
    [0] = alias_sym_pat_volume,
  },
  [19] = {
    [0] = alias_sym_pat_05444c2,
  },
  [20] = {
    [0] = alias_sym_pat_user,
  },
  [21] = {
    [0] = alias_sym_pat_work,
  },
  [22] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
  },
  [23] = {
    [0] = alias_sym_pat_arg,
  },
  [24] = {
    [0] = alias_sym_pat_onbu,
  },
  [25] = {
    [0] = alias_sym_pat_441cd81,
  },
  [26] = {
    [0] = alias_sym_pat_stop,
  },
  [27] = {
    [0] = alias_sym_pat_heal,
  },
  [28] = {
    [0] = alias_sym_pat_shell,
  },
  [29] = {
    [0] = alias_sym_pat_main,
    [1] = alias_sym_pat_4fd4a56,
  },
  [30] = {
    [0] = alias_sym_pat_4a2f38a,
    [1] = alias_sym_pat_4fd4a56,
  },
  [31] = {
    [0] = alias_sym_imm_tok_pat_2b37705,
  },
  [34] = {
    [1] = alias_sym_pat_ea34a52,
  },
  [35] = {
    [0] = alias_sym_imm_tok_pat_589b0f8,
  },
  [36] = {
    [0] = alias_sym_imm_tok_pat_0ab9261,
  },
  [37] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [38] = {
    [0] = alias_sym_imm_tok_pat_0c7fc22,
  },
  [39] = {
    [1] = alias_sym_imm_tok_pat_f43f746,
  },
  [40] = {
    [0] = alias_sym_pat_add,
  },
  [41] = {
    [0] = alias_sym_pat_copy,
  },
  [42] = {
    [0] = alias_sym_imm_tok_pat_7642c4f,
  },
  [43] = {
    [0] = alias_sym_imm_tok_pat_441cd81,
  },
  [44] = {
    [0] = alias_sym_imm_tok_dollar,
  },
  [45] = {
    [0] = alias_sym_pat_9a14b5c,
  },
  [46] = {
    [0] = alias_sym_pat_from,
    [2] = alias_sym_pat_as,
  },
  [47] = {
    [0] = alias_sym_imm_tok_pat_bcfc287,
  },
  [48] = {
    [0] = alias_sym_imm_tok_colon,
  },
  [49] = {
    [0] = alias_sym_imm_tok_pat_d2727a0,
  },
  [50] = {
    [0] = alias_sym_imm_tok_at,
  },
  [52] = {
    [0] = alias_sym_imm_tok_pat_3a2a380,
  },
  [53] = {
    [0] = alias_sym_imm_tok_pat_9f6bbb9,
  },
  [54] = {
    [0] = alias_sym_imm_tok_bslashspace,
  },
  [55] = {
    [0] = alias_sym_pat_4128122,
    [1] = alias_sym_imm_tok_eq,
  },
  [56] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [57] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [58] = {
    [1] = alias_sym_imm_tok_pat_3d340f6,
  },
  [59] = {
    [0] = alias_sym_pat_user,
    [2] = alias_sym_imm_tok_colon,
  },
  [60] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
    [2] = alias_sym_imm_tok_eq,
  },
  [61] = {
    [0] = alias_sym_pat_arg,
    [2] = alias_sym_imm_tok_eq,
  },
  [62] = {
    [0] = alias_sym_imm_tok_lcurl,
    [1] = alias_sym_imm_tok_pat_8713919,
    [2] = alias_sym_imm_tok_rcurl,
  },
  [63] = {
    [1] = alias_sym_imm_tok_pat_f43f746,
    [2] = alias_sym_imm_tok_eq,
    [3] = alias_sym_imm_tok_pat_f6e1de8,
  },
  [64] = {
    [0] = alias_sym_imm_tok_pat_9a14b5c,
  },
  [65] = {
    [0] = alias_sym_pat_from,
    [3] = alias_sym_pat_as,
  },
  [66] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [67] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [68] = {
    [0] = alias_sym_imm_tok_pat_f46f69d,
    [1] = alias_sym_imm_tok_eq,
    [2] = alias_sym_imm_tok_pat_f46f69d,
  },
  [69] = {
    [0] = alias_sym_imm_tok_comma,
  },
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
  [38] = 10,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 9,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 35,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 46,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 46,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 49,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 43,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 49,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 9,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 76,
  [83] = 83,
  [84] = 70,
  [85] = 74,
  [86] = 66,
  [87] = 87,
  [88] = 88,
  [89] = 62,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 10,
  [100] = 100,
  [101] = 78,
  [102] = 102,
  [103] = 53,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 83,
  [108] = 30,
  [109] = 93,
  [110] = 110,
  [111] = 59,
  [112] = 42,
  [113] = 92,
  [114] = 64,
  [115] = 53,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 91,
  [120] = 28,
  [121] = 41,
  [122] = 122,
  [123] = 123,
  [124] = 80,
  [125] = 125,
  [126] = 81,
  [127] = 127,
  [128] = 58,
  [129] = 53,
  [130] = 45,
  [131] = 45,
  [132] = 132,
  [133] = 133,
  [134] = 31,
  [135] = 135,
  [136] = 136,
  [137] = 67,
  [138] = 71,
  [139] = 139,
  [140] = 72,
  [141] = 141,
  [142] = 142,
  [143] = 42,
  [144] = 30,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 145,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 31,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 31,
  [161] = 161,
  [162] = 162,
  [163] = 55,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 45,
  [169] = 169,
  [170] = 159,
  [171] = 30,
  [172] = 172,
  [173] = 173,
  [174] = 166,
  [175] = 166,
  [176] = 42,
  [177] = 142,
  [178] = 45,
  [179] = 42,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 31,
  [184] = 30,
  [185] = 42,
  [186] = 159,
  [187] = 31,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 30,
  [192] = 45,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 45,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 142,
  [202] = 31,
  [203] = 42,
  [204] = 30,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 45,
  [209] = 209,
  [210] = 31,
  [211] = 211,
  [212] = 45,
  [213] = 213,
  [214] = 142,
  [215] = 215,
  [216] = 42,
  [217] = 31,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 41,
  [222] = 222,
  [223] = 30,
  [224] = 224,
  [225] = 28,
  [226] = 30,
  [227] = 227,
  [228] = 30,
  [229] = 45,
  [230] = 230,
  [231] = 231,
  [232] = 162,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 42,
  [238] = 42,
  [239] = 142,
  [240] = 30,
  [241] = 42,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 31,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 247,
  [250] = 31,
  [251] = 231,
  [252] = 252,
  [253] = 45,
  [254] = 254,
  [255] = 255,
  [256] = 247,
  [257] = 257,
  [258] = 246,
  [259] = 42,
  [260] = 246,
  [261] = 247,
  [262] = 30,
  [263] = 42,
  [264] = 142,
  [265] = 247,
  [266] = 197,
  [267] = 247,
  [268] = 246,
  [269] = 247,
  [270] = 270,
  [271] = 142,
  [272] = 45,
  [273] = 246,
  [274] = 247,
  [275] = 246,
  [276] = 276,
  [277] = 277,
  [278] = 42,
  [279] = 31,
  [280] = 199,
  [281] = 281,
  [282] = 246,
  [283] = 246,
  [284] = 247,
  [285] = 246,
  [286] = 247,
  [287] = 30,
  [288] = 247,
  [289] = 247,
  [290] = 42,
  [291] = 142,
  [292] = 45,
  [293] = 132,
  [294] = 125,
  [295] = 162,
  [296] = 31,
  [297] = 162,
  [298] = 31,
  [299] = 247,
  [300] = 122,
  [301] = 123,
  [302] = 302,
  [303] = 30,
  [304] = 304,
  [305] = 247,
  [306] = 30,
  [307] = 45,
  [308] = 248,
  [309] = 309,
  [310] = 142,
  [311] = 281,
  [312] = 312,
  [313] = 55,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 314,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 55,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 123,
  [350] = 122,
  [351] = 351,
  [352] = 352,
  [353] = 345,
  [354] = 354,
  [355] = 355,
  [356] = 125,
  [357] = 132,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 344,
  [369] = 369,
  [370] = 354,
  [371] = 329,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 254,
  [379] = 354,
  [380] = 345,
  [381] = 381,
  [382] = 382,
  [383] = 354,
  [384] = 345,
  [385] = 385,
  [386] = 386,
  [387] = 354,
  [388] = 388,
  [389] = 389,
  [390] = 354,
  [391] = 323,
  [392] = 324,
  [393] = 354,
  [394] = 363,
  [395] = 340,
  [396] = 354,
  [397] = 397,
  [398] = 398,
  [399] = 354,
  [400] = 400,
  [401] = 354,
  [402] = 402,
  [403] = 354,
  [404] = 404,
  [405] = 354,
  [406] = 406,
  [407] = 354,
  [408] = 408,
  [409] = 354,
  [410] = 354,
  [411] = 360,
  [412] = 359,
  [413] = 360,
  [414] = 359,
  [415] = 360,
  [416] = 360,
  [417] = 360,
  [418] = 360,
  [419] = 360,
  [420] = 360,
  [421] = 360,
  [422] = 360,
  [423] = 360,
  [424] = 360,
  [425] = 360,
  [426] = 360,
  [427] = 397,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(176);
      ADVANCE_MAP(
        '"', 292,
        '#', 216,
        '$', 225,
        '\'', 303,
        ',', 271,
        '-', 280,
        ':', 190,
        '<', 244,
        '=', 199,
        '@', 257,
        '[', 289,
        '\\', 300,
        ']', 291,
        '_', 234,
        '{', 227,
        '}', 233,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 287,
        'u', 168,
        '\t', 3,
        ' ', 3,
        '"', 296,
        '/', 296,
        '\\', 296,
        'b', 296,
        'f', 296,
        'n', 296,
        'r', 296,
        't', 296,
      );
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 177,
        '"', 292,
        '#', 319,
        '$', 169,
        '\'', 303,
        '.', 242,
        ':', 190,
        '=', 199,
        '\\', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 177,
        '#', 319,
        '-', 62,
        '.', 64,
        ':', 190,
        '@', 257,
        '\\', 3,
        'A', 149,
        'a', 149,
        'C', 121,
        'c', 121,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 177,
        '#', 319,
        '-', 62,
        '.', 64,
        '\\', 3,
        'A', 149,
        'a', 149,
        'C', 121,
        'c', 121,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(20);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(314);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 177,
        '#', 248,
        '$', 225,
        ':', 190,
        '@', 257,
        '\\', 247,
        'A', 249,
        'a', 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(20);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(219);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(214);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(214);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(202);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(202);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        '#', 319,
        ',', 271,
        '-', 280,
        '.', 282,
        '<', 283,
        '=', 279,
        '[', 289,
        '\\', 4,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '#', 319,
        '-', 280,
        '.', 282,
        '<', 283,
        '[', 289,
        '\\', 4,
        ',', 279,
        '=', 279,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(227);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(54);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(54);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(252);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(256);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(272);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(275);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(321);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 102:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(204);
      END_STATE();
    case 111:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 121:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 122:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 123:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 161:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 162:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 163:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(320);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(223);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(217);
      END_STATE();
    case 173:
      if (eof) ADVANCE(176);
      ADVANCE_MAP(
        '"', 292,
        '#', 216,
        '$', 224,
        '\'', 303,
        ',', 290,
        '-', 280,
        '<', 244,
        '=', 214,
        '[', 289,
        '\\', 300,
        ']', 291,
        ':', 214,
        '@', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 174:
      if (eof) ADVANCE(176);
      ADVANCE_MAP(
        '"', 292,
        '#', 319,
        '$', 169,
        ',', 290,
        '-', 62,
        '.', 64,
        '=', 199,
        'N', 67,
        '[', 289,
        '\\', 3,
        ']', 291,
        '}', 233,
        'A', 84,
        'a', 84,
        'C', 122,
        'c', 122,
        'E', 124,
        'e', 124,
        'F', 147,
        'f', 147,
        'H', 93,
        'h', 93,
        'L', 74,
        'l', 74,
        'M', 75,
        'm', 75,
        'O', 126,
        'o', 126,
        'R', 158,
        'r', 158,
        'S', 101,
        's', 101,
        'U', 150,
        'u', 150,
        'V', 131,
        'v', 131,
        'W', 133,
        'w', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(175);
      END_STATE();
    case 175:
      if (eof) ADVANCE(176);
      ADVANCE_MAP(
        '"', 292,
        '#', 319,
        '$', 169,
        ',', 290,
        '-', 62,
        '.', 64,
        'N', 67,
        '[', 289,
        '\\', 3,
        ']', 291,
        'A', 84,
        'a', 84,
        'C', 122,
        'c', 122,
        'E', 124,
        'e', 124,
        'F', 147,
        'f', 147,
        'H', 93,
        'h', 93,
        'L', 74,
        'l', 74,
        'M', 75,
        'm', 75,
        'O', 126,
        'o', 126,
        'R', 158,
        'r', 158,
        'S', 101,
        's', 101,
        'U', 150,
        'u', 150,
        'V', 131,
        'v', 131,
        'W', 133,
        'w', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(320);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(253);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(261);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\\') ADVANCE(274);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(218);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '"' ||
          lookahead == '$') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(317);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 174},
  [2] = {.lex_state = 174},
  [3] = {.lex_state = 174},
  [4] = {.lex_state = 174},
  [5] = {.lex_state = 174},
  [6] = {.lex_state = 48, .external_lex_state = 2},
  [7] = {.lex_state = 48, .external_lex_state = 2},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 35, .external_lex_state = 2},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 35, .external_lex_state = 2},
  [16] = {.lex_state = 49, .external_lex_state = 2},
  [17] = {.lex_state = 49, .external_lex_state = 2},
  [18] = {.lex_state = 35, .external_lex_state = 2},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 35, .external_lex_state = 2},
  [22] = {.lex_state = 48, .external_lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 47, .external_lex_state = 2},
  [26] = {.lex_state = 47, .external_lex_state = 2},
  [27] = {.lex_state = 47, .external_lex_state = 2},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 17, .external_lex_state = 3},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 47, .external_lex_state = 2},
  [40] = {.lex_state = 47, .external_lex_state = 2},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 17, .external_lex_state = 3},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 17, .external_lex_state = 2},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 35, .external_lex_state = 2},
  [53] = {.lex_state = 23, .external_lex_state = 4},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 48, .external_lex_state = 2},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 23, .external_lex_state = 4},
  [59] = {.lex_state = 23, .external_lex_state = 4},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 17, .external_lex_state = 3},
  [63] = {.lex_state = 25},
  [64] = {.lex_state = 23, .external_lex_state = 4},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 17, .external_lex_state = 3},
  [67] = {.lex_state = 23, .external_lex_state = 4},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 17, .external_lex_state = 2},
  [70] = {.lex_state = 17, .external_lex_state = 3},
  [71] = {.lex_state = 23, .external_lex_state = 4},
  [72] = {.lex_state = 23, .external_lex_state = 4},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 17, .external_lex_state = 3},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 17, .external_lex_state = 3},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 50, .external_lex_state = 2},
  [79] = {.lex_state = 35, .external_lex_state = 2},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 17, .external_lex_state = 2},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 17, .external_lex_state = 2},
  [85] = {.lex_state = 17, .external_lex_state = 2},
  [86] = {.lex_state = 17, .external_lex_state = 2},
  [87] = {.lex_state = 58},
  [88] = {.lex_state = 36},
  [89] = {.lex_state = 17, .external_lex_state = 2},
  [90] = {.lex_state = 38},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 35, .external_lex_state = 2},
  [95] = {.lex_state = 35, .external_lex_state = 2},
  [96] = {.lex_state = 35, .external_lex_state = 2},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 50, .external_lex_state = 2},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 35, .external_lex_state = 2},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 56},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 56},
  [115] = {.lex_state = 56},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 56},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 56},
  [138] = {.lex_state = 56},
  [139] = {.lex_state = 34, .external_lex_state = 2},
  [140] = {.lex_state = 56},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 174},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 174},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 174},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 40},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 40},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 28},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 23, .external_lex_state = 4},
  [163] = {.lex_state = 35, .external_lex_state = 2},
  [164] = {.lex_state = 174},
  [165] = {.lex_state = 58},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 18, .external_lex_state = 4},
  [168] = {.lex_state = 27},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 25},
  [172] = {.lex_state = 25},
  [173] = {.lex_state = 18, .external_lex_state = 4},
  [174] = {.lex_state = 28},
  [175] = {.lex_state = 28},
  [176] = {.lex_state = 27},
  [177] = {.lex_state = 23, .external_lex_state = 4},
  [178] = {.lex_state = 25},
  [179] = {.lex_state = 25},
  [180] = {.lex_state = 57},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 174},
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 27},
  [185] = {.lex_state = 23, .external_lex_state = 4},
  [186] = {.lex_state = 28},
  [187] = {.lex_state = 23, .external_lex_state = 4},
  [188] = {.lex_state = 18, .external_lex_state = 4},
  [189] = {.lex_state = 18, .external_lex_state = 4},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 23, .external_lex_state = 4},
  [192] = {.lex_state = 23, .external_lex_state = 4},
  [193] = {.lex_state = 27},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 5, .external_lex_state = 4},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 17, .external_lex_state = 4},
  [198] = {.lex_state = 5, .external_lex_state = 4},
  [199] = {.lex_state = 17, .external_lex_state = 4},
  [200] = {.lex_state = 5, .external_lex_state = 4},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 23},
  [205] = {.lex_state = 5, .external_lex_state = 4},
  [206] = {.lex_state = 5, .external_lex_state = 4},
  [207] = {.lex_state = 5, .external_lex_state = 4},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 44},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 23},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 41},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 33},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 43},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 43},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 33},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 5, .external_lex_state = 4},
  [231] = {.lex_state = 17, .external_lex_state = 4},
  [232] = {.lex_state = 23},
  [233] = {.lex_state = 35, .external_lex_state = 2},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 5, .external_lex_state = 4},
  [236] = {.lex_state = 5, .external_lex_state = 4},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 14},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 14},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 28},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 52},
  [247] = {.lex_state = 52},
  [248] = {.lex_state = 174},
  [249] = {.lex_state = 52},
  [250] = {.lex_state = 24},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 24},
  [254] = {.lex_state = 18, .external_lex_state = 4},
  [255] = {.lex_state = 18},
  [256] = {.lex_state = 52},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 52},
  [259] = {.lex_state = 13},
  [260] = {.lex_state = 52},
  [261] = {.lex_state = 52},
  [262] = {.lex_state = 24},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 24},
  [265] = {.lex_state = 52},
  [266] = {.lex_state = 17},
  [267] = {.lex_state = 52},
  [268] = {.lex_state = 52},
  [269] = {.lex_state = 52},
  [270] = {.lex_state = 174, .external_lex_state = 5},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 52},
  [274] = {.lex_state = 52},
  [275] = {.lex_state = 52},
  [276] = {.lex_state = 174},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 24},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 174},
  [282] = {.lex_state = 52},
  [283] = {.lex_state = 52},
  [284] = {.lex_state = 52},
  [285] = {.lex_state = 52},
  [286] = {.lex_state = 52},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 52},
  [289] = {.lex_state = 52},
  [290] = {.lex_state = 56},
  [291] = {.lex_state = 56},
  [292] = {.lex_state = 56},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 56},
  [297] = {.lex_state = 56},
  [298] = {.lex_state = 13},
  [299] = {.lex_state = 52},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 14},
  [302] = {.lex_state = 33},
  [303] = {.lex_state = 56},
  [304] = {.lex_state = 13},
  [305] = {.lex_state = 52},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 13},
  [308] = {.lex_state = 174},
  [309] = {.lex_state = 174, .external_lex_state = 5},
  [310] = {.lex_state = 13},
  [311] = {.lex_state = 174},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 174},
  [314] = {.lex_state = 17, .external_lex_state = 4},
  [315] = {.lex_state = 174, .external_lex_state = 5},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 15},
  [318] = {.lex_state = 174},
  [319] = {.lex_state = 174},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 41},
  [323] = {.lex_state = 5, .external_lex_state = 4},
  [324] = {.lex_state = 51},
  [325] = {.lex_state = 59},
  [326] = {.lex_state = 51},
  [327] = {.lex_state = 5, .external_lex_state = 4},
  [328] = {.lex_state = 174, .external_lex_state = 5},
  [329] = {.lex_state = 5, .external_lex_state = 4},
  [330] = {.lex_state = 174},
  [331] = {.lex_state = 174},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 58},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 174},
  [340] = {.lex_state = 5, .external_lex_state = 4},
  [341] = {.lex_state = 15},
  [342] = {.lex_state = 5, .external_lex_state = 4},
  [343] = {.lex_state = 45},
  [344] = {.lex_state = 5, .external_lex_state = 4},
  [345] = {.lex_state = 60},
  [346] = {.lex_state = 174},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 174},
  [350] = {.lex_state = 174},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 60},
  [354] = {.lex_state = 174},
  [355] = {.lex_state = 174},
  [356] = {.lex_state = 174},
  [357] = {.lex_state = 174},
  [358] = {.lex_state = 174},
  [359] = {.lex_state = 174},
  [360] = {.lex_state = 61},
  [361] = {.lex_state = 5},
  [362] = {.lex_state = 5},
  [363] = {.lex_state = 278},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 5},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 5},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 5},
  [370] = {.lex_state = 174},
  [371] = {.lex_state = 5},
  [372] = {.lex_state = 5},
  [373] = {.lex_state = 5},
  [374] = {.lex_state = 5},
  [375] = {.lex_state = 5},
  [376] = {.lex_state = 53},
  [377] = {.lex_state = 55},
  [378] = {.lex_state = 53},
  [379] = {.lex_state = 174},
  [380] = {.lex_state = 60},
  [381] = {.lex_state = 174},
  [382] = {.lex_state = 5},
  [383] = {.lex_state = 174},
  [384] = {.lex_state = 60},
  [385] = {.lex_state = 59},
  [386] = {.lex_state = 5},
  [387] = {.lex_state = 174},
  [388] = {.lex_state = 174},
  [389] = {.lex_state = 5},
  [390] = {.lex_state = 174},
  [391] = {.lex_state = 5},
  [392] = {.lex_state = 174},
  [393] = {.lex_state = 174},
  [394] = {.lex_state = 278},
  [395] = {.lex_state = 5},
  [396] = {.lex_state = 174},
  [397] = {.lex_state = 55},
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 174},
  [400] = {.lex_state = 174},
  [401] = {.lex_state = 174},
  [402] = {.lex_state = 5},
  [403] = {.lex_state = 174},
  [404] = {.lex_state = 209},
  [405] = {.lex_state = 174},
  [406] = {.lex_state = 209},
  [407] = {.lex_state = 174},
  [408] = {.lex_state = 5},
  [409] = {.lex_state = 174},
  [410] = {.lex_state = 174},
  [411] = {.lex_state = 61},
  [412] = {.lex_state = 174},
  [413] = {.lex_state = 61},
  [414] = {.lex_state = 174},
  [415] = {.lex_state = 61},
  [416] = {.lex_state = 61},
  [417] = {.lex_state = 61},
  [418] = {.lex_state = 61},
  [419] = {.lex_state = 61},
  [420] = {.lex_state = 61},
  [421] = {.lex_state = 61},
  [422] = {.lex_state = 61},
  [423] = {.lex_state = 61},
  [424] = {.lex_state = 61},
  [425] = {.lex_state = 61},
  [426] = {.lex_state = 61},
  [427] = {.lex_state = 55},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_shell_fragment_token2] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym_heredoc_marker] = ACTIONS(1),
    [sym_heredoc_line] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym_heredoc_nl] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(400),
    [sym_instruction] = STATE(398),
    [sym_from_instruction] = STATE(402),
    [sym_run_instruction] = STATE(402),
    [sym_cmd_instruction] = STATE(402),
    [sym_label_instruction] = STATE(402),
    [sym_expose_instruction] = STATE(402),
    [sym_env_instruction] = STATE(402),
    [sym_add_instruction] = STATE(402),
    [sym_copy_instruction] = STATE(402),
    [sym_entrypoint_instruction] = STATE(402),
    [sym_volume_instruction] = STATE(402),
    [sym_user_instruction] = STATE(402),
    [sym_workdir_instruction] = STATE(402),
    [sym_arg_instruction] = STATE(402),
    [sym_onbuild_instruction] = STATE(402),
    [sym_stopsignal_instruction] = STATE(402),
    [sym_healthcheck_instruction] = STATE(402),
    [sym_shell_instruction] = STATE(402),
    [sym_maintainer_instruction] = STATE(402),
    [sym_cross_build_instruction] = STATE(402),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_from_instruction_token1] = ACTIONS(9),
    [aux_sym_run_instruction_token1] = ACTIONS(11),
    [aux_sym_cmd_instruction_token1] = ACTIONS(13),
    [aux_sym_label_instruction_token1] = ACTIONS(15),
    [aux_sym_expose_instruction_token1] = ACTIONS(17),
    [aux_sym_env_instruction_token1] = ACTIONS(19),
    [aux_sym_add_instruction_token1] = ACTIONS(21),
    [aux_sym_copy_instruction_token1] = ACTIONS(23),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(25),
    [aux_sym_volume_instruction_token1] = ACTIONS(27),
    [aux_sym_user_instruction_token1] = ACTIONS(29),
    [aux_sym_workdir_instruction_token1] = ACTIONS(31),
    [aux_sym_arg_instruction_token1] = ACTIONS(33),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(35),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(37),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(39),
    [aux_sym_shell_instruction_token1] = ACTIONS(41),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(43),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(47),
    [sym_semgrep_ellipsis] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(54), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(57), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(84), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(96), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(99), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(102), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(105), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(398), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(108), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(402), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [96] = 25,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(398), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(402), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [192] = 23,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(367), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(402), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [282] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(49), 22,
      ts_builtin_sym_end,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [311] = 13,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_semgrep_ellipsis,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(43), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(231), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(195), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(22), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
  [355] = 13,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_semgrep_ellipsis,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(43), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(231), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(230), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(6), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
  [399] = 11,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH2,
    STATE(130), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(133), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(38), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(316), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [438] = 8,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(153), 1,
      anon_sym_BSLASH2,
    STATE(45), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(148), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [469] = 8,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      anon_sym_DOLLAR2,
    ACTIONS(162), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH2,
    STATE(45), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(160), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [500] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH2,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym_imm_expansion,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(106), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [534] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_path_token1,
    ACTIONS(174), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      anon_sym_DASH_DASH,
    ACTIONS(180), 1,
      sym_heredoc_marker,
    STATE(79), 1,
      aux_sym_add_instruction_repeat2,
    STATE(128), 1,
      sym_expansion,
    STATE(376), 1,
      sym_path_with_heredoc,
    STATE(18), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [570] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      anon_sym_DOLLAR2,
    ACTIONS(184), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(186), 1,
      anon_sym_BSLASH2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(99), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(348), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [604] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(164), 1,
      anon_sym_BSLASH2,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym_imm_expansion,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(116), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [638] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_path_token1,
    ACTIONS(174), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      anon_sym_DASH_DASH,
    ACTIONS(180), 1,
      sym_heredoc_marker,
    STATE(96), 1,
      aux_sym_add_instruction_repeat2,
    STATE(128), 1,
      sym_expansion,
    STATE(376), 1,
      sym_path_with_heredoc,
    STATE(52), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [674] = 11,
    ACTIONS(188), 1,
      aux_sym_path_token2,
    ACTIONS(190), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(194), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      sym_semgrep_ellipsis,
    ACTIONS(200), 1,
      sym_heredoc_marker,
    STATE(69), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(251), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(389), 2,
      sym_shell_command,
      sym_json_string_array,
  [710] = 11,
    ACTIONS(188), 1,
      aux_sym_path_token2,
    ACTIONS(190), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(194), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      sym_semgrep_ellipsis,
    ACTIONS(200), 1,
      sym_heredoc_marker,
    STATE(69), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(251), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(375), 2,
      sym_shell_command,
      sym_json_string_array,
  [746] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_path_token1,
    ACTIONS(174), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      anon_sym_DASH_DASH,
    ACTIONS(180), 1,
      sym_heredoc_marker,
    STATE(94), 1,
      aux_sym_add_instruction_repeat2,
    STATE(128), 1,
      sym_expansion,
    STATE(376), 1,
      sym_path_with_heredoc,
    STATE(52), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [782] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      anon_sym_DOLLAR2,
    ACTIONS(184), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(186), 1,
      anon_sym_BSLASH2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(99), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(369), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [816] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      anon_sym_DOLLAR2,
    ACTIONS(184), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(186), 1,
      anon_sym_BSLASH2,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(99), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(386), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [850] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_path_token1,
    ACTIONS(174), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      anon_sym_DASH_DASH,
    ACTIONS(180), 1,
      sym_heredoc_marker,
    STATE(104), 1,
      aux_sym_add_instruction_repeat2,
    STATE(128), 1,
      sym_expansion,
    STATE(376), 1,
      sym_path_with_heredoc,
    STATE(15), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [886] = 5,
    ACTIONS(204), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(207), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(22), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(202), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [910] = 9,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 1,
      aux_sym_label_pair_token1,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      sym_semgrep_metavariable,
    ACTIONS(223), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(346), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [941] = 9,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 1,
      aux_sym_label_pair_token1,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      sym_semgrep_metavariable,
    ACTIONS(236), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(346), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [972] = 5,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(240), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(238), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [995] = 5,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(247), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(245), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1018] = 5,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(253), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(251), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1041] = 3,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1059] = 7,
    ACTIONS(261), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR2,
    ACTIONS(265), 1,
      aux_sym_image_name_token2,
    STATE(131), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(32), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1085] = 3,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(269), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1103] = 3,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(273), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1121] = 7,
    ACTIONS(263), 1,
      anon_sym_DOLLAR2,
    ACTIONS(265), 1,
      aux_sym_image_name_token2,
    ACTIONS(277), 1,
      aux_sym_from_instruction_token2,
    STATE(131), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(36), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(275), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1147] = 7,
    ACTIONS(263), 1,
      anon_sym_DOLLAR2,
    ACTIONS(265), 1,
      aux_sym_image_name_token2,
    ACTIONS(281), 1,
      aux_sym_from_instruction_token2,
    STATE(131), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(36), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(279), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1173] = 7,
    ACTIONS(263), 1,
      anon_sym_DOLLAR2,
    ACTIONS(265), 1,
      aux_sym_image_name_token2,
    ACTIONS(285), 1,
      aux_sym_from_instruction_token2,
    STATE(131), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(33), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(283), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1199] = 9,
    ACTIONS(289), 1,
      aux_sym_path_token2,
    ACTIONS(292), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(295), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(298), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(301), 1,
      sym_required_line_continuation,
    ACTIONS(303), 1,
      sym_heredoc_marker,
    STATE(35), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(287), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1229] = 7,
    ACTIONS(308), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    ACTIONS(313), 1,
      aux_sym_image_name_token2,
    STATE(131), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(36), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1255] = 8,
    ACTIONS(228), 1,
      aux_sym_label_pair_token1,
    ACTIONS(236), 1,
      sym_semgrep_ellipsis,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(24), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(346), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1283] = 8,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH2,
    ACTIONS(156), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(160), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(44), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1311] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(324), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(322), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1329] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(326), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1347] = 3,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(332), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1365] = 3,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(336), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1383] = 9,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(340), 1,
      sym_required_line_continuation,
    STATE(35), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(338), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1413] = 8,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(342), 1,
      anon_sym_DOLLAR2,
    ACTIONS(345), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(348), 1,
      anon_sym_BSLASH2,
    STATE(130), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(148), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(44), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1441] = 3,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(353), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1459] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    STATE(168), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1486] = 7,
    ACTIONS(367), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    STATE(196), 1,
      sym_imm_expansion,
    STATE(211), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(50), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1511] = 9,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(301), 1,
      sym_required_line_continuation,
    ACTIONS(371), 1,
      aux_sym_path_token2,
    ACTIONS(374), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(377), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(380), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(383), 1,
      sym_heredoc_marker,
    STATE(48), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [1540] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    ACTIONS(390), 1,
      sym_double_quoted_escape_sequence,
    STATE(168), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(56), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1567] = 7,
    ACTIONS(367), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    STATE(196), 1,
      sym_imm_expansion,
    STATE(211), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(60), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1592] = 7,
    ACTIONS(367), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    STATE(196), 1,
      sym_imm_expansion,
    STATE(211), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(60), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1617] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_path_token1,
    ACTIONS(400), 1,
      anon_sym_DASH_DASH,
    ACTIONS(398), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
    STATE(52), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [1640] = 7,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      aux_sym_path_token3,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(192), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(411), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1665] = 7,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(415), 1,
      anon_sym_DASH_DASH,
    ACTIONS(417), 1,
      sym_semgrep_ellipsis,
    STATE(365), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
    STATE(147), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1690] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(421), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(419), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1707] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1734] = 8,
    ACTIONS(425), 1,
      anon_sym_DOLLAR2,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(433), 1,
      anon_sym_BSLASH,
    ACTIONS(436), 1,
      sym_double_quoted_escape_sequence,
    STATE(168), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1761] = 7,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(441), 1,
      aux_sym_path_token3,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    STATE(192), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(445), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(72), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1786] = 7,
    ACTIONS(441), 1,
      aux_sym_path_token3,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(449), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(71), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1811] = 7,
    ACTIONS(453), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(456), 1,
      anon_sym_DOLLAR2,
    STATE(196), 1,
      sym_imm_expansion,
    STATE(211), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(60), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1836] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1863] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(461), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(463), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1880] = 7,
    ACTIONS(467), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(469), 1,
      anon_sym_DOLLAR2,
    ACTIONS(472), 1,
      aux_sym_image_tag_token1,
    STATE(178), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(63), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [1905] = 7,
    ACTIONS(441), 1,
      aux_sym_path_token3,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    ACTIONS(475), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(477), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(67), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1930] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      anon_sym_BSLASH,
    ACTIONS(483), 1,
      sym_double_quoted_escape_sequence,
    STATE(168), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(61), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1957] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(485), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(487), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1974] = 7,
    ACTIONS(441), 1,
      aux_sym_path_token3,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(491), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1999] = 7,
    ACTIONS(495), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(497), 1,
      anon_sym_DOLLAR2,
    ACTIONS(499), 1,
      aux_sym_image_tag_token1,
    STATE(178), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(63), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [2024] = 9,
    ACTIONS(188), 1,
      aux_sym_path_token2,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(194), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(200), 1,
      sym_heredoc_marker,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      sym_required_line_continuation,
    ACTIONS(501), 1,
      aux_sym_shell_fragment_token2,
    STATE(48), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [2053] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(503), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(505), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2070] = 7,
    ACTIONS(441), 1,
      aux_sym_path_token3,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    ACTIONS(507), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(509), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2095] = 7,
    ACTIONS(441), 1,
      aux_sym_path_token3,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(513), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2120] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    ACTIONS(519), 1,
      sym_double_quoted_escape_sequence,
    STATE(168), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(46), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2147] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(523), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2164] = 7,
    ACTIONS(367), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    STATE(196), 1,
      sym_imm_expansion,
    STATE(211), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(51), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2189] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(527), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(529), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2206] = 7,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(531), 1,
      anon_sym_DOLLAR2,
    ACTIONS(534), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(537), 1,
      anon_sym_BSLASH2,
    STATE(229), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(77), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2230] = 8,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(540), 1,
      aux_sym_shell_fragment_token2,
    STATE(43), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(314), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2256] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_path_token1,
    ACTIONS(544), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(546), 1,
      anon_sym_DOLLAR,
    ACTIONS(548), 1,
      sym_heredoc_marker,
    STATE(58), 1,
      sym_expansion,
    STATE(95), 1,
      aux_sym_add_instruction_repeat2,
    STATE(173), 1,
      sym_path_with_heredoc,
  [2284] = 7,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(552), 1,
      aux_sym_path_token3,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(556), 1,
      sym_non_newline_whitespace,
    STATE(212), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(93), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2308] = 7,
    ACTIONS(552), 1,
      aux_sym_path_token3,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 1,
      sym_non_newline_whitespace,
    STATE(212), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(92), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2332] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(527), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(529), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2348] = 7,
    ACTIONS(552), 1,
      aux_sym_path_token3,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 1,
      sym_non_newline_whitespace,
    STATE(212), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(91), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2372] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(503), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(505), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2388] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(523), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2404] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(485), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(487), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2420] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      aux_sym_image_name_token1,
    ACTIONS(570), 1,
      anon_sym_DASH_DASH,
    STATE(29), 1,
      sym_expansion,
    STATE(118), 1,
      sym_image_name,
    STATE(165), 1,
      sym_param,
    STATE(321), 1,
      sym_image_spec,
  [2448] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(572), 1,
      aux_sym_path_token1,
    ACTIONS(574), 1,
      aux_sym_path_token2,
    ACTIONS(576), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_expansion,
    STATE(252), 1,
      sym_path,
    STATE(374), 1,
      sym_json_string_array,
  [2476] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(461), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(463), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2492] = 7,
    ACTIONS(367), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    STATE(196), 1,
      sym_imm_expansion,
    STATE(211), 1,
      sym_immediate_expansion,
    STATE(347), 1,
      sym_immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(105), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2516] = 7,
    ACTIONS(552), 1,
      aux_sym_path_token3,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      sym_non_newline_whitespace,
    STATE(212), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(103), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2540] = 7,
    ACTIONS(552), 1,
      aux_sym_path_token3,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      sym_non_newline_whitespace,
    STATE(212), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(103), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2564] = 7,
    ACTIONS(552), 1,
      aux_sym_path_token3,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      sym_non_newline_whitespace,
    STATE(212), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(103), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2588] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_path_token1,
    ACTIONS(544), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(546), 1,
      anon_sym_DOLLAR,
    ACTIONS(548), 1,
      sym_heredoc_marker,
    STATE(58), 1,
      sym_expansion,
    STATE(95), 1,
      aux_sym_add_instruction_repeat2,
    STATE(188), 1,
      sym_path_with_heredoc,
  [2616] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_path_token1,
    ACTIONS(593), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(599), 1,
      sym_heredoc_marker,
    STATE(95), 1,
      aux_sym_add_instruction_repeat2,
    STATE(128), 1,
      sym_expansion,
    STATE(376), 1,
      sym_path_with_heredoc,
  [2644] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_path_token1,
    ACTIONS(544), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(546), 1,
      anon_sym_DOLLAR,
    ACTIONS(548), 1,
      sym_heredoc_marker,
    STATE(58), 1,
      sym_expansion,
    STATE(95), 1,
      aux_sym_add_instruction_repeat2,
    STATE(189), 1,
      sym_path_with_heredoc,
  [2672] = 7,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(606), 1,
      anon_sym_DOLLAR2,
    ACTIONS(608), 1,
      aux_sym_image_digest_token1,
    STATE(208), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(100), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2696] = 6,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      aux_sym_expose_port_token1,
    ACTIONS(618), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(98), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2718] = 7,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      anon_sym_DOLLAR2,
    ACTIONS(184), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(186), 1,
      anon_sym_BSLASH2,
    STATE(229), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(77), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2742] = 7,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(625), 1,
      anon_sym_DOLLAR2,
    ACTIONS(628), 1,
      aux_sym_image_digest_token1,
    STATE(208), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(100), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2766] = 8,
    ACTIONS(188), 1,
      aux_sym_path_token2,
    ACTIONS(190), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(194), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(200), 1,
      sym_heredoc_marker,
    STATE(69), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(320), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2792] = 6,
    ACTIONS(631), 1,
      anon_sym_LF,
    ACTIONS(633), 1,
      anon_sym_DOLLAR,
    ACTIONS(635), 1,
      aux_sym_expose_port_token1,
    ACTIONS(637), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(98), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2814] = 7,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      sym_non_newline_whitespace,
    ACTIONS(639), 1,
      aux_sym_path_token3,
    ACTIONS(642), 1,
      anon_sym_DOLLAR2,
    STATE(212), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(103), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2838] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_path_token1,
    ACTIONS(544), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(546), 1,
      anon_sym_DOLLAR,
    ACTIONS(548), 1,
      sym_heredoc_marker,
    STATE(58), 1,
      sym_expansion,
    STATE(95), 1,
      aux_sym_add_instruction_repeat2,
    STATE(167), 1,
      sym_path_with_heredoc,
  [2866] = 7,
    ACTIONS(367), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    ACTIONS(645), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_imm_expansion,
    STATE(211), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(60), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2890] = 3,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(649), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2905] = 6,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_path_token3,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    STATE(253), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(119), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2926] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(269), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(267), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2941] = 6,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_path_token3,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    STATE(253), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2962] = 6,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(660), 1,
      anon_sym_DOLLAR2,
    STATE(272), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [2983] = 6,
    ACTIONS(449), 1,
      sym_non_newline_whitespace,
    ACTIONS(663), 1,
      aux_sym_path_token3,
    ACTIONS(665), 1,
      anon_sym_DOLLAR2,
    STATE(292), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(138), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3004] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(336), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3019] = 6,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_path_token3,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    STATE(253), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3040] = 6,
    ACTIONS(477), 1,
      sym_non_newline_whitespace,
    ACTIONS(663), 1,
      aux_sym_path_token3,
    ACTIONS(665), 1,
      anon_sym_DOLLAR2,
    STATE(292), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(137), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3061] = 6,
    ACTIONS(411), 1,
      sym_non_newline_whitespace,
    ACTIONS(667), 1,
      aux_sym_path_token3,
    ACTIONS(670), 1,
      anon_sym_DOLLAR2,
    STATE(292), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(115), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3082] = 3,
    ACTIONS(673), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(675), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3097] = 6,
    ACTIONS(677), 1,
      anon_sym_LF,
    ACTIONS(679), 1,
      aux_sym_env_key_token1,
    ACTIONS(681), 1,
      sym_semgrep_ellipsis,
    STATE(355), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(135), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3118] = 7,
    ACTIONS(683), 1,
      anon_sym_LF,
    ACTIONS(685), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(689), 1,
      anon_sym_AT,
    STATE(219), 1,
      sym_image_tag,
    STATE(317), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3141] = 6,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_path_token3,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    STATE(253), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3162] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(257), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3177] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(332), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3192] = 3,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(693), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3207] = 3,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(697), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3222] = 6,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_path_token3,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    STATE(253), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(109), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3243] = 3,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(701), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3258] = 6,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_path_token3,
    ACTIONS(653), 1,
      anon_sym_DOLLAR2,
    STATE(253), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(113), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3279] = 6,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      anon_sym_DOLLAR2,
    ACTIONS(707), 1,
      aux_sym_image_alias_token2,
    STATE(307), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(146), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3300] = 6,
    ACTIONS(445), 1,
      sym_non_newline_whitespace,
    ACTIONS(663), 1,
      aux_sym_path_token3,
    ACTIONS(665), 1,
      anon_sym_DOLLAR2,
    STATE(292), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(140), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3321] = 6,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(709), 1,
      aux_sym_path_token3,
    ACTIONS(712), 1,
      anon_sym_DOLLAR2,
    STATE(253), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3342] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(353), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3357] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(353), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(351), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3372] = 3,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(717), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3387] = 6,
    ACTIONS(705), 1,
      anon_sym_DOLLAR2,
    ACTIONS(707), 1,
      aux_sym_image_alias_token2,
    ACTIONS(719), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(146), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3408] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(273), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3423] = 6,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      aux_sym_env_key_token1,
    ACTIONS(726), 1,
      sym_semgrep_ellipsis,
    STATE(355), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(135), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3444] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(731), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(729), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3459] = 6,
    ACTIONS(491), 1,
      sym_non_newline_whitespace,
    ACTIONS(663), 1,
      aux_sym_path_token3,
    ACTIONS(665), 1,
      anon_sym_DOLLAR2,
    STATE(292), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(115), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3480] = 6,
    ACTIONS(509), 1,
      sym_non_newline_whitespace,
    ACTIONS(663), 1,
      aux_sym_path_token3,
    ACTIONS(665), 1,
      anon_sym_DOLLAR2,
    STATE(292), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(115), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3501] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_EQ,
    ACTIONS(735), 1,
      aux_sym_path_token1,
    ACTIONS(737), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [3520] = 6,
    ACTIONS(513), 1,
      sym_non_newline_whitespace,
    ACTIONS(663), 1,
      aux_sym_path_token3,
    ACTIONS(665), 1,
      anon_sym_DOLLAR2,
    STATE(292), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(115), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3541] = 4,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(741), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3558] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(747), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(745), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3573] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(336), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(334), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3588] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(269), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3603] = 6,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym_array_element,
    STATE(339), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(753), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3624] = 6,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(757), 1,
      anon_sym_DOLLAR2,
    ACTIONS(760), 1,
      aux_sym_image_alias_token2,
    STATE(307), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(146), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3645] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(415), 1,
      anon_sym_DASH_DASH,
    ACTIONS(763), 1,
      sym_semgrep_ellipsis,
    STATE(408), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(164), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [3666] = 3,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(767), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3681] = 6,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(281), 1,
      sym_array_element,
    STATE(339), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(753), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3702] = 6,
    ACTIONS(771), 1,
      anon_sym_LF,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    STATE(272), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(154), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3723] = 6,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    ACTIONS(777), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(153), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3744] = 6,
    ACTIONS(779), 1,
      aux_sym_env_key_token1,
    ACTIONS(781), 1,
      sym_semgrep_ellipsis,
    STATE(326), 1,
      sym_env_key,
    STATE(382), 1,
      sym_spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(117), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3765] = 6,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    ACTIONS(783), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3786] = 6,
    ACTIONS(773), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(775), 1,
      anon_sym_DOLLAR2,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3807] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(273), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(271), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3822] = 5,
    ACTIONS(787), 1,
      anon_sym_DOLLAR,
    ACTIONS(789), 1,
      aux_sym_expose_port_token1,
    ACTIONS(791), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(102), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [3841] = 6,
    ACTIONS(705), 1,
      anon_sym_DOLLAR2,
    ACTIONS(707), 1,
      aux_sym_image_alias_token2,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(133), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3862] = 6,
    ACTIONS(705), 1,
      anon_sym_DOLLAR2,
    ACTIONS(707), 1,
      aux_sym_image_alias_token2,
    ACTIONS(795), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(127), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3883] = 6,
    ACTIONS(797), 1,
      anon_sym_BSLASH,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(803), 1,
      sym_single_quoted_escape_sequence,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3903] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(273), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3917] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_path_token1,
    ACTIONS(807), 1,
      aux_sym_path_token2,
    ACTIONS(809), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym_expansion,
    STATE(372), 1,
      sym_path,
  [3939] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(813), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [3953] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_path_token1,
    ACTIONS(421), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [3969] = 5,
    ACTIONS(815), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(817), 1,
      anon_sym_DASH_DASH,
    ACTIONS(820), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(164), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [3987] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      aux_sym_image_name_token1,
    STATE(29), 1,
      sym_expansion,
    STATE(118), 1,
      sym_image_name,
    STATE(341), 1,
      sym_image_spec,
  [4009] = 6,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(823), 1,
      anon_sym_BSLASH,
    ACTIONS(825), 1,
      anon_sym_SQUOTE,
    ACTIONS(827), 1,
      sym_single_quoted_escape_sequence,
    STATE(186), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4029] = 5,
    ACTIONS(829), 1,
      anon_sym_LF,
    ACTIONS(831), 1,
      sym_non_newline_whitespace,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(205), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4047] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(353), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4061] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_path_token1,
    ACTIONS(574), 1,
      aux_sym_path_token2,
    ACTIONS(576), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_expansion,
    STATE(338), 1,
      sym_path,
  [4083] = 6,
    ACTIONS(797), 1,
      anon_sym_BSLASH,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(803), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(835), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4103] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(269), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(267), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4117] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(839), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(837), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4131] = 5,
    ACTIONS(831), 1,
      sym_non_newline_whitespace,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(841), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(207), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4149] = 6,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(843), 1,
      anon_sym_BSLASH,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    ACTIONS(847), 1,
      sym_single_quoted_escape_sequence,
    STATE(170), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4169] = 6,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(849), 1,
      anon_sym_BSLASH,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      sym_single_quoted_escape_sequence,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4189] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(336), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4203] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(745), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4217] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(353), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4231] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(336), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(334), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4245] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DOLLAR2,
    ACTIONS(499), 1,
      aux_sym_image_tag_token1,
    STATE(178), 1,
      sym_imm_expansion,
    STATE(68), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [4265] = 5,
    ACTIONS(606), 1,
      anon_sym_DOLLAR2,
    ACTIONS(608), 1,
      aux_sym_image_digest_token1,
    STATE(208), 1,
      sym_imm_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(97), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [4283] = 5,
    ACTIONS(751), 1,
      anon_sym_DQUOTE,
    STATE(330), 1,
      sym_array_element,
    STATE(339), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(753), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4301] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(273), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(271), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4315] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(269), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4329] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(334), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4343] = 6,
    ACTIONS(797), 1,
      anon_sym_BSLASH,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(803), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(855), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4363] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(271), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4377] = 5,
    ACTIONS(831), 1,
      sym_non_newline_whitespace,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(857), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(236), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4395] = 5,
    ACTIONS(831), 1,
      sym_non_newline_whitespace,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(235), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4413] = 6,
    ACTIONS(861), 1,
      anon_sym_BSLASH,
    ACTIONS(864), 1,
      anon_sym_SQUOTE,
    ACTIONS(866), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(869), 1,
      sym_single_quoted_escape_sequence,
    STATE(190), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4433] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(267), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4447] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(351), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4461] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(872), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(874), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4475] = 3,
    ACTIONS(878), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(876), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4488] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(880), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(198), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4503] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4514] = 4,
    ACTIONS(884), 1,
      sym_required_line_continuation,
    STATE(199), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(882), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4529] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(886), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4544] = 4,
    ACTIONS(890), 1,
      sym_required_line_continuation,
    STATE(199), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(888), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4559] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(880), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4574] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4585] = 3,
    ACTIONS(273), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4598] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4609] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(269), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4622] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(893), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4637] = 4,
    ACTIONS(895), 1,
      anon_sym_LF,
    ACTIONS(897), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4652] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(900), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4667] = 3,
    ACTIONS(353), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4680] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(902), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4691] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(273), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4704] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(904), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4715] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(353), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4728] = 5,
    ACTIONS(906), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(908), 1,
      anon_sym_DOLLAR,
    STATE(47), 1,
      sym_expansion,
    STATE(332), 1,
      sym_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4745] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(747), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4758] = 5,
    ACTIONS(910), 1,
      anon_sym_DQUOTE,
    ACTIONS(912), 1,
      aux_sym_json_string_token1,
    ACTIONS(914), 1,
      sym_json_escape_sequence,
    STATE(220), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4775] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(336), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4788] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(273), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4801] = 5,
    ACTIONS(916), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(918), 1,
      anon_sym_DOLLAR,
    STATE(150), 1,
      sym_expansion,
    STATE(366), 1,
      sym_stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4818] = 5,
    ACTIONS(689), 1,
      anon_sym_AT,
    ACTIONS(920), 1,
      anon_sym_LF,
    ACTIONS(922), 1,
      aux_sym_from_instruction_token2,
    STATE(337), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4835] = 5,
    ACTIONS(912), 1,
      aux_sym_json_string_token1,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    ACTIONS(926), 1,
      sym_json_escape_sequence,
    STATE(227), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4852] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(332), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4865] = 5,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(930), 1,
      aux_sym_image_alias_token1,
    STATE(158), 1,
      sym_expansion,
    STATE(352), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4882] = 3,
    ACTIONS(269), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4895] = 5,
    ACTIONS(928), 1,
      anon_sym_DOLLAR,
    ACTIONS(930), 1,
      aux_sym_image_alias_token1,
    STATE(158), 1,
      sym_expansion,
    STATE(373), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4912] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(257), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4925] = 3,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4938] = 5,
    ACTIONS(932), 1,
      anon_sym_DQUOTE,
    ACTIONS(934), 1,
      aux_sym_json_string_token1,
    ACTIONS(937), 1,
      sym_json_escape_sequence,
    STATE(227), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4955] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4966] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(353), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4979] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(940), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(200), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4994] = 4,
    ACTIONS(884), 1,
      sym_required_line_continuation,
    STATE(197), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(942), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [5009] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(811), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(813), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5022] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(944), 1,
      aux_sym_path_token1,
    ACTIONS(946), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [5037] = 3,
    ACTIONS(948), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(950), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [5050] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(952), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5065] = 4,
    ACTIONS(833), 1,
      sym_heredoc_nl,
    ACTIONS(954), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5080] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(336), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5093] = 3,
    ACTIONS(336), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [5106] = 3,
    ACTIONS(745), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(747), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [5119] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(269), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5132] = 3,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [5145] = 3,
    ACTIONS(956), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(958), 3,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      sym_semgrep_ellipsis,
  [5158] = 3,
    ACTIONS(960), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(962), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [5171] = 3,
    ACTIONS(966), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(964), 3,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
  [5184] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [5195] = 4,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      sym_variable,
    STATE(291), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5209] = 4,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      sym_variable,
    STATE(183), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5223] = 4,
    ACTIONS(976), 1,
      anon_sym_COMMA2,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5237] = 4,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    ACTIONS(970), 1,
      sym_variable,
    STATE(296), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5251] = 3,
    ACTIONS(273), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5263] = 4,
    ACTIONS(942), 1,
      anon_sym_LF,
    ACTIONS(980), 1,
      sym_required_line_continuation,
    STATE(266), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5277] = 4,
    ACTIONS(982), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      sym_non_newline_whitespace,
    STATE(255), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5291] = 3,
    ACTIONS(353), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5303] = 3,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(445), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
  [5315] = 4,
    ACTIONS(984), 1,
      sym_non_newline_whitespace,
    ACTIONS(986), 1,
      anon_sym_LF,
    STATE(312), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5329] = 4,
    ACTIONS(988), 1,
      anon_sym_LBRACE,
    ACTIONS(990), 1,
      sym_variable,
    STATE(210), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5343] = 3,
    ACTIONS(992), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(994), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5355] = 4,
    ACTIONS(988), 1,
      anon_sym_LBRACE,
    ACTIONS(990), 1,
      sym_variable,
    STATE(214), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5369] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5379] = 4,
    ACTIONS(996), 1,
      anon_sym_LBRACE,
    ACTIONS(998), 1,
      sym_variable,
    STATE(239), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5393] = 4,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym_variable,
    STATE(160), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5407] = 3,
    ACTIONS(269), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5419] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5429] = 3,
    ACTIONS(747), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5441] = 4,
    ACTIONS(1004), 1,
      anon_sym_LBRACE,
    ACTIONS(1006), 1,
      sym_variable,
    STATE(245), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5455] = 4,
    ACTIONS(882), 1,
      anon_sym_LF,
    ACTIONS(980), 1,
      sym_required_line_continuation,
    STATE(280), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5469] = 4,
    ACTIONS(1008), 1,
      anon_sym_LBRACE,
    ACTIONS(1010), 1,
      sym_variable,
    STATE(155), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5483] = 4,
    ACTIONS(1004), 1,
      anon_sym_LBRACE,
    ACTIONS(1006), 1,
      sym_variable,
    STATE(201), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5497] = 4,
    ACTIONS(1012), 1,
      anon_sym_LBRACE,
    ACTIONS(1014), 1,
      sym_variable,
    STATE(250), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5511] = 4,
    ACTIONS(1016), 1,
      sym_heredoc_line,
    ACTIONS(1019), 1,
      sym_heredoc_end,
    STATE(270), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5525] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5535] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5545] = 4,
    ACTIONS(1012), 1,
      anon_sym_LBRACE,
    ACTIONS(1014), 1,
      sym_variable,
    STATE(264), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5559] = 4,
    ACTIONS(1021), 1,
      anon_sym_LBRACE,
    ACTIONS(1023), 1,
      sym_variable,
    STATE(279), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5573] = 4,
    ACTIONS(1021), 1,
      anon_sym_LBRACE,
    ACTIONS(1023), 1,
      sym_variable,
    STATE(271), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5587] = 4,
    ACTIONS(1025), 1,
      anon_sym_COMMA2,
    ACTIONS(1028), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5601] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1030), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5611] = 3,
    ACTIONS(336), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5623] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5633] = 4,
    ACTIONS(888), 1,
      anon_sym_LF,
    ACTIONS(1032), 1,
      sym_required_line_continuation,
    STATE(280), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5647] = 4,
    ACTIONS(976), 1,
      anon_sym_COMMA2,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5661] = 4,
    ACTIONS(1037), 1,
      anon_sym_LBRACE,
    ACTIONS(1039), 1,
      sym_variable,
    STATE(177), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5675] = 4,
    ACTIONS(1008), 1,
      anon_sym_LBRACE,
    ACTIONS(1010), 1,
      sym_variable,
    STATE(142), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5689] = 4,
    ACTIONS(1041), 1,
      anon_sym_LBRACE,
    ACTIONS(1043), 1,
      sym_variable,
    STATE(202), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5703] = 4,
    ACTIONS(1045), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym_variable,
    STATE(310), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5717] = 4,
    ACTIONS(1049), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      sym_variable,
    STATE(31), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5731] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5741] = 4,
    ACTIONS(1053), 1,
      anon_sym_LBRACE,
    ACTIONS(1055), 1,
      sym_variable,
    STATE(134), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5755] = 4,
    ACTIONS(1057), 1,
      anon_sym_LBRACE,
    ACTIONS(1059), 1,
      sym_variable,
    STATE(217), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5769] = 3,
    ACTIONS(336), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5781] = 3,
    ACTIONS(747), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5793] = 3,
    ACTIONS(353), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5805] = 3,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(717), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5817] = 3,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(701), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5829] = 3,
    ACTIONS(811), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5841] = 3,
    ACTIONS(273), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5853] = 3,
    ACTIONS(811), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5865] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5875] = 4,
    ACTIONS(1037), 1,
      anon_sym_LBRACE,
    ACTIONS(1039), 1,
      sym_variable,
    STATE(187), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5889] = 3,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(693), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5901] = 3,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(697), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5913] = 3,
    ACTIONS(1063), 1,
      sym_json_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1061), 2,
      anon_sym_DQUOTE,
      aux_sym_json_string_token1,
  [5925] = 3,
    ACTIONS(269), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5937] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1065), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5947] = 4,
    ACTIONS(1045), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym_variable,
    STATE(298), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5961] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5971] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5981] = 4,
    ACTIONS(976), 1,
      anon_sym_COMMA2,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5995] = 4,
    ACTIONS(1069), 1,
      sym_heredoc_line,
    ACTIONS(1071), 1,
      sym_heredoc_end,
    STATE(270), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6009] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [6019] = 4,
    ACTIONS(976), 1,
      anon_sym_COMMA2,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6033] = 4,
    ACTIONS(1075), 1,
      anon_sym_LF,
    ACTIONS(1077), 1,
      sym_non_newline_whitespace,
    STATE(312), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6047] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(421), 3,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      sym_semgrep_ellipsis,
  [6057] = 3,
    ACTIONS(1080), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(888), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6069] = 4,
    ACTIONS(1069), 1,
      sym_heredoc_line,
    ACTIONS(1082), 1,
      sym_heredoc_end,
    STATE(309), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6083] = 3,
    ACTIONS(1084), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1086), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [6095] = 3,
    ACTIONS(1088), 1,
      anon_sym_LF,
    ACTIONS(1090), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6106] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1092), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6115] = 3,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(364), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6126] = 3,
    ACTIONS(888), 1,
      anon_sym_LF,
    ACTIONS(1080), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6137] = 3,
    ACTIONS(1094), 1,
      anon_sym_LF,
    ACTIONS(1096), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6148] = 3,
    ACTIONS(1098), 1,
      aux_sym_param_token1,
    ACTIONS(1100), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6159] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(942), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6168] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [6177] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      aux_sym_mount_param_param_token1,
    STATE(40), 1,
      sym_mount_param_param,
  [6190] = 3,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(1108), 1,
      aux_sym_spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6201] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1110), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6210] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1019), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [6219] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1112), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6228] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1028), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6237] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1114), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6246] = 3,
    ACTIONS(1116), 1,
      anon_sym_LF,
    ACTIONS(1118), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6257] = 3,
    ACTIONS(1120), 1,
      anon_sym_LF,
    ACTIONS(1122), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6268] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_image_name_token1,
    ACTIONS(421), 1,
      anon_sym_DOLLAR,
  [6281] = 3,
    ACTIONS(1124), 1,
      anon_sym_LF,
    ACTIONS(1126), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6292] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      aux_sym_mount_param_param_token1,
    STATE(27), 1,
      sym_mount_param_param,
  [6305] = 3,
    ACTIONS(1128), 1,
      anon_sym_LF,
    ACTIONS(1130), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6316] = 3,
    ACTIONS(1075), 1,
      anon_sym_LF,
    ACTIONS(1132), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6327] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1134), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6336] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1136), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6345] = 3,
    ACTIONS(1138), 1,
      anon_sym_LF,
    ACTIONS(1140), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6356] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1142), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6365] = 3,
    ACTIONS(1144), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(1146), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6376] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1148), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6385] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1150), 1,
      aux_sym_param_token2,
  [6395] = 2,
    ACTIONS(1152), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6403] = 2,
    ACTIONS(1154), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6411] = 2,
    ACTIONS(1156), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6419] = 2,
    ACTIONS(695), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6427] = 2,
    ACTIONS(691), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6435] = 2,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6443] = 2,
    ACTIONS(1160), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6451] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1162), 1,
      aux_sym_param_token2,
  [6461] = 2,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6469] = 2,
    ACTIONS(1106), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6477] = 2,
    ACTIONS(699), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6485] = 2,
    ACTIONS(715), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6493] = 2,
    ACTIONS(1166), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6501] = 2,
    ACTIONS(1168), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6509] = 2,
    ACTIONS(1170), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6517] = 2,
    ACTIONS(1172), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6525] = 2,
    ACTIONS(1174), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6533] = 2,
    ACTIONS(1176), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6541] = 2,
    ACTIONS(1178), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6549] = 2,
    ACTIONS(956), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6557] = 2,
    ACTIONS(1180), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6565] = 2,
    ACTIONS(1182), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6573] = 2,
    ACTIONS(1148), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6581] = 2,
    ACTIONS(1184), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6589] = 2,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6597] = 2,
    ACTIONS(1112), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6605] = 2,
    ACTIONS(1188), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6613] = 2,
    ACTIONS(1190), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6621] = 2,
    ACTIONS(1192), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6629] = 2,
    ACTIONS(1194), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6637] = 2,
    ACTIONS(831), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6645] = 2,
    ACTIONS(1196), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6653] = 2,
    ACTIONS(445), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6661] = 2,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6669] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1200), 1,
      aux_sym_param_token2,
  [6679] = 2,
    ACTIONS(1202), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6687] = 2,
    ACTIONS(677), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6695] = 2,
    ACTIONS(1204), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6703] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1206), 1,
      aux_sym_param_token2,
  [6713] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1208), 1,
      aux_sym_mount_param_param_token1,
  [6723] = 2,
    ACTIONS(1210), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6731] = 2,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6739] = 2,
    ACTIONS(1214), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6747] = 2,
    ACTIONS(1216), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6755] = 2,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6763] = 2,
    ACTIONS(942), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6771] = 2,
    ACTIONS(1102), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6779] = 2,
    ACTIONS(1220), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6787] = 2,
    ACTIONS(1222), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6795] = 2,
    ACTIONS(1136), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6803] = 2,
    ACTIONS(1224), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6811] = 2,
    ACTIONS(1226), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6819] = 2,
    ACTIONS(1228), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6827] = 2,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6835] = 2,
    ACTIONS(1232), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6843] = 2,
    ACTIONS(1234), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6851] = 2,
    ACTIONS(1236), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6859] = 2,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6867] = 2,
    ACTIONS(1240), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6875] = 2,
    ACTIONS(1242), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6883] = 2,
    ACTIONS(1244), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6891] = 2,
    ACTIONS(1246), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6899] = 2,
    ACTIONS(1248), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6907] = 2,
    ACTIONS(1250), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6915] = 2,
    ACTIONS(1252), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6923] = 2,
    ACTIONS(1254), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6931] = 2,
    ACTIONS(1256), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6939] = 2,
    ACTIONS(1258), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6947] = 2,
    ACTIONS(1260), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6955] = 2,
    ACTIONS(1262), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6963] = 2,
    ACTIONS(1264), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6971] = 2,
    ACTIONS(1266), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6979] = 2,
    ACTIONS(1268), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6987] = 2,
    ACTIONS(1270), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6995] = 2,
    ACTIONS(1272), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7003] = 2,
    ACTIONS(1274), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7011] = 2,
    ACTIONS(1276), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7019] = 2,
    ACTIONS(1278), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7027] = 2,
    ACTIONS(1280), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7035] = 2,
    ACTIONS(1282), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7043] = 2,
    ACTIONS(1284), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7051] = 2,
    ACTIONS(1286), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 355,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 438,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 500,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 570,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 638,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 710,
  [SMALL_STATE(18)] = 746,
  [SMALL_STATE(19)] = 782,
  [SMALL_STATE(20)] = 816,
  [SMALL_STATE(21)] = 850,
  [SMALL_STATE(22)] = 886,
  [SMALL_STATE(23)] = 910,
  [SMALL_STATE(24)] = 941,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 995,
  [SMALL_STATE(27)] = 1018,
  [SMALL_STATE(28)] = 1041,
  [SMALL_STATE(29)] = 1059,
  [SMALL_STATE(30)] = 1085,
  [SMALL_STATE(31)] = 1103,
  [SMALL_STATE(32)] = 1121,
  [SMALL_STATE(33)] = 1147,
  [SMALL_STATE(34)] = 1173,
  [SMALL_STATE(35)] = 1199,
  [SMALL_STATE(36)] = 1229,
  [SMALL_STATE(37)] = 1255,
  [SMALL_STATE(38)] = 1283,
  [SMALL_STATE(39)] = 1311,
  [SMALL_STATE(40)] = 1329,
  [SMALL_STATE(41)] = 1347,
  [SMALL_STATE(42)] = 1365,
  [SMALL_STATE(43)] = 1383,
  [SMALL_STATE(44)] = 1413,
  [SMALL_STATE(45)] = 1441,
  [SMALL_STATE(46)] = 1459,
  [SMALL_STATE(47)] = 1486,
  [SMALL_STATE(48)] = 1511,
  [SMALL_STATE(49)] = 1540,
  [SMALL_STATE(50)] = 1567,
  [SMALL_STATE(51)] = 1592,
  [SMALL_STATE(52)] = 1617,
  [SMALL_STATE(53)] = 1640,
  [SMALL_STATE(54)] = 1665,
  [SMALL_STATE(55)] = 1690,
  [SMALL_STATE(56)] = 1707,
  [SMALL_STATE(57)] = 1734,
  [SMALL_STATE(58)] = 1761,
  [SMALL_STATE(59)] = 1786,
  [SMALL_STATE(60)] = 1811,
  [SMALL_STATE(61)] = 1836,
  [SMALL_STATE(62)] = 1863,
  [SMALL_STATE(63)] = 1880,
  [SMALL_STATE(64)] = 1905,
  [SMALL_STATE(65)] = 1930,
  [SMALL_STATE(66)] = 1957,
  [SMALL_STATE(67)] = 1974,
  [SMALL_STATE(68)] = 1999,
  [SMALL_STATE(69)] = 2024,
  [SMALL_STATE(70)] = 2053,
  [SMALL_STATE(71)] = 2070,
  [SMALL_STATE(72)] = 2095,
  [SMALL_STATE(73)] = 2120,
  [SMALL_STATE(74)] = 2147,
  [SMALL_STATE(75)] = 2164,
  [SMALL_STATE(76)] = 2189,
  [SMALL_STATE(77)] = 2206,
  [SMALL_STATE(78)] = 2230,
  [SMALL_STATE(79)] = 2256,
  [SMALL_STATE(80)] = 2284,
  [SMALL_STATE(81)] = 2308,
  [SMALL_STATE(82)] = 2332,
  [SMALL_STATE(83)] = 2348,
  [SMALL_STATE(84)] = 2372,
  [SMALL_STATE(85)] = 2388,
  [SMALL_STATE(86)] = 2404,
  [SMALL_STATE(87)] = 2420,
  [SMALL_STATE(88)] = 2448,
  [SMALL_STATE(89)] = 2476,
  [SMALL_STATE(90)] = 2492,
  [SMALL_STATE(91)] = 2516,
  [SMALL_STATE(92)] = 2540,
  [SMALL_STATE(93)] = 2564,
  [SMALL_STATE(94)] = 2588,
  [SMALL_STATE(95)] = 2616,
  [SMALL_STATE(96)] = 2644,
  [SMALL_STATE(97)] = 2672,
  [SMALL_STATE(98)] = 2696,
  [SMALL_STATE(99)] = 2718,
  [SMALL_STATE(100)] = 2742,
  [SMALL_STATE(101)] = 2766,
  [SMALL_STATE(102)] = 2792,
  [SMALL_STATE(103)] = 2814,
  [SMALL_STATE(104)] = 2838,
  [SMALL_STATE(105)] = 2866,
  [SMALL_STATE(106)] = 2890,
  [SMALL_STATE(107)] = 2905,
  [SMALL_STATE(108)] = 2926,
  [SMALL_STATE(109)] = 2941,
  [SMALL_STATE(110)] = 2962,
  [SMALL_STATE(111)] = 2983,
  [SMALL_STATE(112)] = 3004,
  [SMALL_STATE(113)] = 3019,
  [SMALL_STATE(114)] = 3040,
  [SMALL_STATE(115)] = 3061,
  [SMALL_STATE(116)] = 3082,
  [SMALL_STATE(117)] = 3097,
  [SMALL_STATE(118)] = 3118,
  [SMALL_STATE(119)] = 3141,
  [SMALL_STATE(120)] = 3162,
  [SMALL_STATE(121)] = 3177,
  [SMALL_STATE(122)] = 3192,
  [SMALL_STATE(123)] = 3207,
  [SMALL_STATE(124)] = 3222,
  [SMALL_STATE(125)] = 3243,
  [SMALL_STATE(126)] = 3258,
  [SMALL_STATE(127)] = 3279,
  [SMALL_STATE(128)] = 3300,
  [SMALL_STATE(129)] = 3321,
  [SMALL_STATE(130)] = 3342,
  [SMALL_STATE(131)] = 3357,
  [SMALL_STATE(132)] = 3372,
  [SMALL_STATE(133)] = 3387,
  [SMALL_STATE(134)] = 3408,
  [SMALL_STATE(135)] = 3423,
  [SMALL_STATE(136)] = 3444,
  [SMALL_STATE(137)] = 3459,
  [SMALL_STATE(138)] = 3480,
  [SMALL_STATE(139)] = 3501,
  [SMALL_STATE(140)] = 3520,
  [SMALL_STATE(141)] = 3541,
  [SMALL_STATE(142)] = 3558,
  [SMALL_STATE(143)] = 3573,
  [SMALL_STATE(144)] = 3588,
  [SMALL_STATE(145)] = 3603,
  [SMALL_STATE(146)] = 3624,
  [SMALL_STATE(147)] = 3645,
  [SMALL_STATE(148)] = 3666,
  [SMALL_STATE(149)] = 3681,
  [SMALL_STATE(150)] = 3702,
  [SMALL_STATE(151)] = 3723,
  [SMALL_STATE(152)] = 3744,
  [SMALL_STATE(153)] = 3765,
  [SMALL_STATE(154)] = 3786,
  [SMALL_STATE(155)] = 3807,
  [SMALL_STATE(156)] = 3822,
  [SMALL_STATE(157)] = 3841,
  [SMALL_STATE(158)] = 3862,
  [SMALL_STATE(159)] = 3883,
  [SMALL_STATE(160)] = 3903,
  [SMALL_STATE(161)] = 3917,
  [SMALL_STATE(162)] = 3939,
  [SMALL_STATE(163)] = 3953,
  [SMALL_STATE(164)] = 3969,
  [SMALL_STATE(165)] = 3987,
  [SMALL_STATE(166)] = 4009,
  [SMALL_STATE(167)] = 4029,
  [SMALL_STATE(168)] = 4047,
  [SMALL_STATE(169)] = 4061,
  [SMALL_STATE(170)] = 4083,
  [SMALL_STATE(171)] = 4103,
  [SMALL_STATE(172)] = 4117,
  [SMALL_STATE(173)] = 4131,
  [SMALL_STATE(174)] = 4149,
  [SMALL_STATE(175)] = 4169,
  [SMALL_STATE(176)] = 4189,
  [SMALL_STATE(177)] = 4203,
  [SMALL_STATE(178)] = 4217,
  [SMALL_STATE(179)] = 4231,
  [SMALL_STATE(180)] = 4245,
  [SMALL_STATE(181)] = 4265,
  [SMALL_STATE(182)] = 4283,
  [SMALL_STATE(183)] = 4301,
  [SMALL_STATE(184)] = 4315,
  [SMALL_STATE(185)] = 4329,
  [SMALL_STATE(186)] = 4343,
  [SMALL_STATE(187)] = 4363,
  [SMALL_STATE(188)] = 4377,
  [SMALL_STATE(189)] = 4395,
  [SMALL_STATE(190)] = 4413,
  [SMALL_STATE(191)] = 4433,
  [SMALL_STATE(192)] = 4447,
  [SMALL_STATE(193)] = 4461,
  [SMALL_STATE(194)] = 4475,
  [SMALL_STATE(195)] = 4488,
  [SMALL_STATE(196)] = 4503,
  [SMALL_STATE(197)] = 4514,
  [SMALL_STATE(198)] = 4529,
  [SMALL_STATE(199)] = 4544,
  [SMALL_STATE(200)] = 4559,
  [SMALL_STATE(201)] = 4574,
  [SMALL_STATE(202)] = 4585,
  [SMALL_STATE(203)] = 4598,
  [SMALL_STATE(204)] = 4609,
  [SMALL_STATE(205)] = 4622,
  [SMALL_STATE(206)] = 4637,
  [SMALL_STATE(207)] = 4652,
  [SMALL_STATE(208)] = 4667,
  [SMALL_STATE(209)] = 4680,
  [SMALL_STATE(210)] = 4691,
  [SMALL_STATE(211)] = 4704,
  [SMALL_STATE(212)] = 4715,
  [SMALL_STATE(213)] = 4728,
  [SMALL_STATE(214)] = 4745,
  [SMALL_STATE(215)] = 4758,
  [SMALL_STATE(216)] = 4775,
  [SMALL_STATE(217)] = 4788,
  [SMALL_STATE(218)] = 4801,
  [SMALL_STATE(219)] = 4818,
  [SMALL_STATE(220)] = 4835,
  [SMALL_STATE(221)] = 4852,
  [SMALL_STATE(222)] = 4865,
  [SMALL_STATE(223)] = 4882,
  [SMALL_STATE(224)] = 4895,
  [SMALL_STATE(225)] = 4912,
  [SMALL_STATE(226)] = 4925,
  [SMALL_STATE(227)] = 4938,
  [SMALL_STATE(228)] = 4955,
  [SMALL_STATE(229)] = 4966,
  [SMALL_STATE(230)] = 4979,
  [SMALL_STATE(231)] = 4994,
  [SMALL_STATE(232)] = 5009,
  [SMALL_STATE(233)] = 5022,
  [SMALL_STATE(234)] = 5037,
  [SMALL_STATE(235)] = 5050,
  [SMALL_STATE(236)] = 5065,
  [SMALL_STATE(237)] = 5080,
  [SMALL_STATE(238)] = 5093,
  [SMALL_STATE(239)] = 5106,
  [SMALL_STATE(240)] = 5119,
  [SMALL_STATE(241)] = 5132,
  [SMALL_STATE(242)] = 5145,
  [SMALL_STATE(243)] = 5158,
  [SMALL_STATE(244)] = 5171,
  [SMALL_STATE(245)] = 5184,
  [SMALL_STATE(246)] = 5195,
  [SMALL_STATE(247)] = 5209,
  [SMALL_STATE(248)] = 5223,
  [SMALL_STATE(249)] = 5237,
  [SMALL_STATE(250)] = 5251,
  [SMALL_STATE(251)] = 5263,
  [SMALL_STATE(252)] = 5277,
  [SMALL_STATE(253)] = 5291,
  [SMALL_STATE(254)] = 5303,
  [SMALL_STATE(255)] = 5315,
  [SMALL_STATE(256)] = 5329,
  [SMALL_STATE(257)] = 5343,
  [SMALL_STATE(258)] = 5355,
  [SMALL_STATE(259)] = 5369,
  [SMALL_STATE(260)] = 5379,
  [SMALL_STATE(261)] = 5393,
  [SMALL_STATE(262)] = 5407,
  [SMALL_STATE(263)] = 5419,
  [SMALL_STATE(264)] = 5429,
  [SMALL_STATE(265)] = 5441,
  [SMALL_STATE(266)] = 5455,
  [SMALL_STATE(267)] = 5469,
  [SMALL_STATE(268)] = 5483,
  [SMALL_STATE(269)] = 5497,
  [SMALL_STATE(270)] = 5511,
  [SMALL_STATE(271)] = 5525,
  [SMALL_STATE(272)] = 5535,
  [SMALL_STATE(273)] = 5545,
  [SMALL_STATE(274)] = 5559,
  [SMALL_STATE(275)] = 5573,
  [SMALL_STATE(276)] = 5587,
  [SMALL_STATE(277)] = 5601,
  [SMALL_STATE(278)] = 5611,
  [SMALL_STATE(279)] = 5623,
  [SMALL_STATE(280)] = 5633,
  [SMALL_STATE(281)] = 5647,
  [SMALL_STATE(282)] = 5661,
  [SMALL_STATE(283)] = 5675,
  [SMALL_STATE(284)] = 5689,
  [SMALL_STATE(285)] = 5703,
  [SMALL_STATE(286)] = 5717,
  [SMALL_STATE(287)] = 5731,
  [SMALL_STATE(288)] = 5741,
  [SMALL_STATE(289)] = 5755,
  [SMALL_STATE(290)] = 5769,
  [SMALL_STATE(291)] = 5781,
  [SMALL_STATE(292)] = 5793,
  [SMALL_STATE(293)] = 5805,
  [SMALL_STATE(294)] = 5817,
  [SMALL_STATE(295)] = 5829,
  [SMALL_STATE(296)] = 5841,
  [SMALL_STATE(297)] = 5853,
  [SMALL_STATE(298)] = 5865,
  [SMALL_STATE(299)] = 5875,
  [SMALL_STATE(300)] = 5889,
  [SMALL_STATE(301)] = 5901,
  [SMALL_STATE(302)] = 5913,
  [SMALL_STATE(303)] = 5925,
  [SMALL_STATE(304)] = 5937,
  [SMALL_STATE(305)] = 5947,
  [SMALL_STATE(306)] = 5961,
  [SMALL_STATE(307)] = 5971,
  [SMALL_STATE(308)] = 5981,
  [SMALL_STATE(309)] = 5995,
  [SMALL_STATE(310)] = 6009,
  [SMALL_STATE(311)] = 6019,
  [SMALL_STATE(312)] = 6033,
  [SMALL_STATE(313)] = 6047,
  [SMALL_STATE(314)] = 6057,
  [SMALL_STATE(315)] = 6069,
  [SMALL_STATE(316)] = 6083,
  [SMALL_STATE(317)] = 6095,
  [SMALL_STATE(318)] = 6106,
  [SMALL_STATE(319)] = 6115,
  [SMALL_STATE(320)] = 6126,
  [SMALL_STATE(321)] = 6137,
  [SMALL_STATE(322)] = 6148,
  [SMALL_STATE(323)] = 6159,
  [SMALL_STATE(324)] = 6168,
  [SMALL_STATE(325)] = 6177,
  [SMALL_STATE(326)] = 6190,
  [SMALL_STATE(327)] = 6201,
  [SMALL_STATE(328)] = 6210,
  [SMALL_STATE(329)] = 6219,
  [SMALL_STATE(330)] = 6228,
  [SMALL_STATE(331)] = 6237,
  [SMALL_STATE(332)] = 6246,
  [SMALL_STATE(333)] = 6257,
  [SMALL_STATE(334)] = 6268,
  [SMALL_STATE(335)] = 6281,
  [SMALL_STATE(336)] = 6292,
  [SMALL_STATE(337)] = 6305,
  [SMALL_STATE(338)] = 6316,
  [SMALL_STATE(339)] = 6327,
  [SMALL_STATE(340)] = 6336,
  [SMALL_STATE(341)] = 6345,
  [SMALL_STATE(342)] = 6356,
  [SMALL_STATE(343)] = 6365,
  [SMALL_STATE(344)] = 6376,
  [SMALL_STATE(345)] = 6385,
  [SMALL_STATE(346)] = 6395,
  [SMALL_STATE(347)] = 6403,
  [SMALL_STATE(348)] = 6411,
  [SMALL_STATE(349)] = 6419,
  [SMALL_STATE(350)] = 6427,
  [SMALL_STATE(351)] = 6435,
  [SMALL_STATE(352)] = 6443,
  [SMALL_STATE(353)] = 6451,
  [SMALL_STATE(354)] = 6461,
  [SMALL_STATE(355)] = 6469,
  [SMALL_STATE(356)] = 6477,
  [SMALL_STATE(357)] = 6485,
  [SMALL_STATE(358)] = 6493,
  [SMALL_STATE(359)] = 6501,
  [SMALL_STATE(360)] = 6509,
  [SMALL_STATE(361)] = 6517,
  [SMALL_STATE(362)] = 6525,
  [SMALL_STATE(363)] = 6533,
  [SMALL_STATE(364)] = 6541,
  [SMALL_STATE(365)] = 6549,
  [SMALL_STATE(366)] = 6557,
  [SMALL_STATE(367)] = 6565,
  [SMALL_STATE(368)] = 6573,
  [SMALL_STATE(369)] = 6581,
  [SMALL_STATE(370)] = 6589,
  [SMALL_STATE(371)] = 6597,
  [SMALL_STATE(372)] = 6605,
  [SMALL_STATE(373)] = 6613,
  [SMALL_STATE(374)] = 6621,
  [SMALL_STATE(375)] = 6629,
  [SMALL_STATE(376)] = 6637,
  [SMALL_STATE(377)] = 6645,
  [SMALL_STATE(378)] = 6653,
  [SMALL_STATE(379)] = 6661,
  [SMALL_STATE(380)] = 6669,
  [SMALL_STATE(381)] = 6679,
  [SMALL_STATE(382)] = 6687,
  [SMALL_STATE(383)] = 6695,
  [SMALL_STATE(384)] = 6703,
  [SMALL_STATE(385)] = 6713,
  [SMALL_STATE(386)] = 6723,
  [SMALL_STATE(387)] = 6731,
  [SMALL_STATE(388)] = 6739,
  [SMALL_STATE(389)] = 6747,
  [SMALL_STATE(390)] = 6755,
  [SMALL_STATE(391)] = 6763,
  [SMALL_STATE(392)] = 6771,
  [SMALL_STATE(393)] = 6779,
  [SMALL_STATE(394)] = 6787,
  [SMALL_STATE(395)] = 6795,
  [SMALL_STATE(396)] = 6803,
  [SMALL_STATE(397)] = 6811,
  [SMALL_STATE(398)] = 6819,
  [SMALL_STATE(399)] = 6827,
  [SMALL_STATE(400)] = 6835,
  [SMALL_STATE(401)] = 6843,
  [SMALL_STATE(402)] = 6851,
  [SMALL_STATE(403)] = 6859,
  [SMALL_STATE(404)] = 6867,
  [SMALL_STATE(405)] = 6875,
  [SMALL_STATE(406)] = 6883,
  [SMALL_STATE(407)] = 6891,
  [SMALL_STATE(408)] = 6899,
  [SMALL_STATE(409)] = 6907,
  [SMALL_STATE(410)] = 6915,
  [SMALL_STATE(411)] = 6923,
  [SMALL_STATE(412)] = 6931,
  [SMALL_STATE(413)] = 6939,
  [SMALL_STATE(414)] = 6947,
  [SMALL_STATE(415)] = 6955,
  [SMALL_STATE(416)] = 6963,
  [SMALL_STATE(417)] = 6971,
  [SMALL_STATE(418)] = 6979,
  [SMALL_STATE(419)] = 6987,
  [SMALL_STATE(420)] = 6995,
  [SMALL_STATE(421)] = 7003,
  [SMALL_STATE(422)] = 7011,
  [SMALL_STATE(423)] = 7019,
  [SMALL_STATE(424)] = 7027,
  [SMALL_STATE(425)] = 7035,
  [SMALL_STATE(426)] = 7043,
  [SMALL_STATE(427)] = 7051,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 37),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, 0, 10),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, 0, 67),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, 0, 67),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, 0, 66),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, 0, 66),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 53),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 53),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, 0, 62),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, 0, 62),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, 0, 44),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, 0, 44),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, 0, 68),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, 0, 68),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 69),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 69),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 54),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 54),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, 0, 19),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, 0, 63),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 63),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 16),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 16),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 34),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 34),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 15),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 15),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 4),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 15),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 15),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, 0, 48),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, 0, 48),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 6),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 6),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 16),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 16),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 5),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, 0, 19),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 7),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 7),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 15),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 15),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 4),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 4),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 15),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 15),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(114),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(111),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(246),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(378),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, 0, 50),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, 0, 50),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, 0, 12),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 55),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 55),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 56),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 56),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 14),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 45),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, 0, 31),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, 0, 31),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_param, 2, 0, 39),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_param, 2, 0, 39),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 11),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 11),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, 0, 25),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, 0, 25),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 45),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, 0, 38),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, 0, 38),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, 0, 40),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, 0, 47),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, 0, 47),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, 0, 41),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, 0, 41),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, 0, 40),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [866] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, 0, 35),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, 0, 35),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, 0, 49),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, 0, 49),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 8),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 8),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 40),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(315),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 41),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, 0, 42),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 32),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 32),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, 0, 8),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 40),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 41),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, 0, 27),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, 0, 11),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, 0, 11),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, 0, 36),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, 0, 36),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, 0, 18),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, 0, 18),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, 0, 43),
  [1032] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1, 0, 52),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1, 0, 52),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, 0, 64),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 57),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 57),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 33),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 33),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, 0, 2),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, 0, 13),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, 0, 20),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 22),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 23),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, 0, 51),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, 0, 51),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 2),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, 0, 59),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, 0, 58),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 46),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 30),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, 0, 29),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, 0, 28),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, 0, 26),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, 0, 24),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 61),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, 0, 21),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, 0, 65),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, 0, 18),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, 0, 17),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 60),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, 0, 9),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1232] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 27),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_heredoc_marker = 0,
  ts_external_token_heredoc_line = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token_heredoc_nl = 3,
  ts_external_token_error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token_heredoc_line] = sym_heredoc_line,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token_heredoc_nl] = sym_heredoc_nl,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token_heredoc_nl] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_heredoc_marker] = true,
  },
  [3] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_nl] = true,
  },
  [4] = {
    [ts_external_token_heredoc_nl] = true,
  },
  [5] = {
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dockerfile_external_scanner_create(void);
void tree_sitter_dockerfile_external_scanner_destroy(void *);
bool tree_sitter_dockerfile_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dockerfile_external_scanner_serialize(void *, char *);
void tree_sitter_dockerfile_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dockerfile(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dockerfile_external_scanner_create,
      tree_sitter_dockerfile_external_scanner_destroy,
      tree_sitter_dockerfile_external_scanner_scan,
      tree_sitter_dockerfile_external_scanner_serialize,
      tree_sitter_dockerfile_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
