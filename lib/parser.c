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
  [38] = 38,
  [39] = 39,
  [40] = 9,
  [41] = 10,
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
  [57] = 30,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 29,
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
  [73] = 72,
  [74] = 65,
  [75] = 72,
  [76] = 65,
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
  [93] = 70,
  [94] = 53,
  [95] = 56,
  [96] = 55,
  [97] = 46,
  [98] = 80,
  [99] = 99,
  [100] = 68,
  [101] = 101,
  [102] = 9,
  [103] = 10,
  [104] = 104,
  [105] = 105,
  [106] = 42,
  [107] = 107,
  [108] = 62,
  [109] = 109,
  [110] = 110,
  [111] = 68,
  [112] = 112,
  [113] = 113,
  [114] = 45,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 63,
  [119] = 119,
  [120] = 120,
  [121] = 64,
  [122] = 122,
  [123] = 123,
  [124] = 42,
  [125] = 125,
  [126] = 58,
  [127] = 59,
  [128] = 104,
  [129] = 105,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 60,
  [136] = 86,
  [137] = 87,
  [138] = 88,
  [139] = 28,
  [140] = 33,
  [141] = 44,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 68,
  [148] = 148,
  [149] = 149,
  [150] = 43,
  [151] = 151,
  [152] = 43,
  [153] = 153,
  [154] = 44,
  [155] = 45,
  [156] = 122,
  [157] = 157,
  [158] = 78,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 163,
  [164] = 164,
  [165] = 42,
  [166] = 166,
  [167] = 167,
  [168] = 43,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 66,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 44,
  [177] = 144,
  [178] = 42,
  [179] = 43,
  [180] = 45,
  [181] = 44,
  [182] = 45,
  [183] = 183,
  [184] = 44,
  [185] = 45,
  [186] = 42,
  [187] = 43,
  [188] = 188,
  [189] = 189,
  [190] = 170,
  [191] = 159,
  [192] = 170,
  [193] = 193,
  [194] = 44,
  [195] = 45,
  [196] = 196,
  [197] = 28,
  [198] = 33,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 144,
  [205] = 42,
  [206] = 44,
  [207] = 43,
  [208] = 45,
  [209] = 44,
  [210] = 144,
  [211] = 42,
  [212] = 43,
  [213] = 45,
  [214] = 144,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 42,
  [221] = 43,
  [222] = 193,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 44,
  [230] = 42,
  [231] = 43,
  [232] = 45,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 44,
  [239] = 45,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 244,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 227,
  [253] = 253,
  [254] = 254,
  [255] = 249,
  [256] = 256,
  [257] = 241,
  [258] = 44,
  [259] = 144,
  [260] = 42,
  [261] = 133,
  [262] = 134,
  [263] = 193,
  [264] = 43,
  [265] = 265,
  [266] = 142,
  [267] = 143,
  [268] = 45,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 66,
  [273] = 44,
  [274] = 144,
  [275] = 42,
  [276] = 43,
  [277] = 45,
  [278] = 44,
  [279] = 144,
  [280] = 42,
  [281] = 43,
  [282] = 249,
  [283] = 283,
  [284] = 284,
  [285] = 144,
  [286] = 44,
  [287] = 45,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 42,
  [292] = 43,
  [293] = 293,
  [294] = 270,
  [295] = 246,
  [296] = 253,
  [297] = 249,
  [298] = 270,
  [299] = 193,
  [300] = 249,
  [301] = 270,
  [302] = 249,
  [303] = 270,
  [304] = 249,
  [305] = 270,
  [306] = 249,
  [307] = 270,
  [308] = 249,
  [309] = 270,
  [310] = 249,
  [311] = 270,
  [312] = 249,
  [313] = 249,
  [314] = 249,
  [315] = 249,
  [316] = 45,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 256,
  [321] = 321,
  [322] = 322,
  [323] = 66,
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
  [334] = 334,
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
  [346] = 143,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 337,
  [352] = 352,
  [353] = 353,
  [354] = 142,
  [355] = 355,
  [356] = 356,
  [357] = 248,
  [358] = 358,
  [359] = 359,
  [360] = 335,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 352,
  [370] = 368,
  [371] = 362,
  [372] = 133,
  [373] = 344,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 352,
  [379] = 368,
  [380] = 380,
  [381] = 381,
  [382] = 352,
  [383] = 368,
  [384] = 384,
  [385] = 385,
  [386] = 352,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 134,
  [391] = 329,
  [392] = 352,
  [393] = 393,
  [394] = 394,
  [395] = 352,
  [396] = 396,
  [397] = 397,
  [398] = 352,
  [399] = 341,
  [400] = 352,
  [401] = 401,
  [402] = 352,
  [403] = 403,
  [404] = 352,
  [405] = 405,
  [406] = 352,
  [407] = 407,
  [408] = 352,
  [409] = 352,
  [410] = 350,
  [411] = 348,
  [412] = 350,
  [413] = 348,
  [414] = 350,
  [415] = 350,
  [416] = 350,
  [417] = 350,
  [418] = 350,
  [419] = 350,
  [420] = 350,
  [421] = 350,
  [422] = 350,
  [423] = 350,
  [424] = 350,
  [425] = 350,
  [426] = 397,
  [427] = 352,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        '"', 283,
        '#', 213,
        '$', 221,
        '\'', 294,
        ',', 263,
        '-', 271,
        ':', 189,
        '<', 239,
        '=', 198,
        '@', 250,
        '[', 280,
        '\\', 291,
        ']', 282,
        '_', 229,
        '{', 223,
        '}', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 278,
        'u', 168,
        '\t', 3,
        ' ', 3,
        '"', 287,
        '/', 287,
        '\\', 287,
        'b', 287,
        'f', 287,
        'n', 287,
        'r', 287,
        't', 287,
      );
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(276);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 176,
        '"', 283,
        '#', 310,
        '$', 169,
        '\'', 294,
        '.', 237,
        ':', 189,
        '=', 198,
        '\\', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(202);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 176,
        '#', 310,
        '-', 62,
        '.', 64,
        ':', 189,
        '@', 250,
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
        '\n', 176,
        '#', 310,
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
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(20);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(305);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 176,
        '#', 244,
        '$', 221,
        ':', 189,
        '@', 250,
        '\\', 242,
        'A', 243,
        'a', 243,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(20);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(276);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(292);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(211);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(211);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        '#', 310,
        ',', 263,
        '-', 271,
        '.', 273,
        '<', 274,
        '=', 270,
        '[', 280,
        '\\', 4,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '#', 310,
        '-', 271,
        '.', 273,
        '<', 274,
        '[', 280,
        '\\', 4,
        ',', 270,
        '=', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(54);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(249);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(54);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(239);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(264);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(266);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(312);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(204);
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
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(235);
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
          lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
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
          lookahead == 'g') ADVANCE(196);
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
          lookahead == 'k') ADVANCE(203);
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
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
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
          lookahead == 'm') ADVANCE(177);
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
          lookahead == 'n') ADVANCE(179);
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
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
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
          lookahead == 's') ADVANCE(178);
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
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(183);
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
          lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 163:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
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
          lookahead == '_') ADVANCE(311);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(214);
      END_STATE();
    case 172:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        '"', 283,
        '#', 213,
        '$', 220,
        '\'', 294,
        ',', 281,
        '-', 271,
        '<', 239,
        '=', 211,
        '[', 280,
        '\\', 291,
        ']', 282,
        ':', 211,
        '@', 211,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(172);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 173:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        '"', 283,
        '#', 310,
        '$', 169,
        ',', 281,
        '-', 62,
        '.', 64,
        '=', 198,
        'N', 67,
        '[', 280,
        '\\', 3,
        ']', 282,
        '}', 228,
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
          lookahead == ' ') SKIP(174);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        '"', 283,
        '#', 310,
        '$', 169,
        ',', 281,
        '-', 62,
        '.', 64,
        'N', 67,
        '[', 280,
        '\\', 3,
        ']', 282,
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
          lookahead == ' ') SKIP(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(311);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(215);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(310);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(284);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(307);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(308);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(305);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 173},
  [2] = {.lex_state = 173},
  [3] = {.lex_state = 173},
  [4] = {.lex_state = 173},
  [5] = {.lex_state = 173},
  [6] = {.lex_state = 48, .external_lex_state = 2},
  [7] = {.lex_state = 48, .external_lex_state = 2},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 35, .external_lex_state = 2},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 35, .external_lex_state = 2},
  [16] = {.lex_state = 35, .external_lex_state = 2},
  [17] = {.lex_state = 35, .external_lex_state = 2},
  [18] = {.lex_state = 49, .external_lex_state = 2},
  [19] = {.lex_state = 48, .external_lex_state = 2},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 49, .external_lex_state = 2},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 47, .external_lex_state = 2},
  [26] = {.lex_state = 47, .external_lex_state = 2},
  [27] = {.lex_state = 47, .external_lex_state = 2},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 17, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 47, .external_lex_state = 2},
  [39] = {.lex_state = 47, .external_lex_state = 2},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 17, .external_lex_state = 3},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 173},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 35, .external_lex_state = 2},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 17, .external_lex_state = 3},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 17, .external_lex_state = 3},
  [56] = {.lex_state = 17, .external_lex_state = 3},
  [57] = {.lex_state = 17, .external_lex_state = 2},
  [58] = {.lex_state = 24, .external_lex_state = 4},
  [59] = {.lex_state = 24, .external_lex_state = 4},
  [60] = {.lex_state = 24, .external_lex_state = 4},
  [61] = {.lex_state = 17, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 4},
  [63] = {.lex_state = 24, .external_lex_state = 4},
  [64] = {.lex_state = 24, .external_lex_state = 4},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 48, .external_lex_state = 2},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 24, .external_lex_state = 4},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 17, .external_lex_state = 3},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 50, .external_lex_state = 2},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 58},
  [83] = {.lex_state = 35, .external_lex_state = 2},
  [84] = {.lex_state = 35, .external_lex_state = 2},
  [85] = {.lex_state = 35, .external_lex_state = 2},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 17, .external_lex_state = 2},
  [94] = {.lex_state = 17, .external_lex_state = 2},
  [95] = {.lex_state = 17, .external_lex_state = 2},
  [96] = {.lex_state = 17, .external_lex_state = 2},
  [97] = {.lex_state = 17, .external_lex_state = 2},
  [98] = {.lex_state = 50, .external_lex_state = 2},
  [99] = {.lex_state = 35, .external_lex_state = 2},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 35, .external_lex_state = 2},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 57},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 57},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 34, .external_lex_state = 2},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 57},
  [122] = {.lex_state = 173},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 57},
  [127] = {.lex_state = 57},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 173},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 57},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 40},
  [147] = {.lex_state = 25},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 22},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 173},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 25},
  [159] = {.lex_state = 28},
  [160] = {.lex_state = 37},
  [161] = {.lex_state = 37},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 56},
  [164] = {.lex_state = 173},
  [165] = {.lex_state = 27},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 27},
  [169] = {.lex_state = 173},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 35, .external_lex_state = 2},
  [173] = {.lex_state = 18, .external_lex_state = 4},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 18, .external_lex_state = 4},
  [176] = {.lex_state = 27},
  [177] = {.lex_state = 24, .external_lex_state = 4},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 23},
  [180] = {.lex_state = 27},
  [181] = {.lex_state = 24, .external_lex_state = 4},
  [182] = {.lex_state = 24, .external_lex_state = 4},
  [183] = {.lex_state = 18, .external_lex_state = 4},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 23},
  [186] = {.lex_state = 24, .external_lex_state = 4},
  [187] = {.lex_state = 24, .external_lex_state = 4},
  [188] = {.lex_state = 18, .external_lex_state = 4},
  [189] = {.lex_state = 58},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 28},
  [192] = {.lex_state = 28},
  [193] = {.lex_state = 24, .external_lex_state = 4},
  [194] = {.lex_state = 24},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 35, .external_lex_state = 2},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 42},
  [202] = {.lex_state = 5, .external_lex_state = 4},
  [203] = {.lex_state = 33},
  [204] = {.lex_state = 24},
  [205] = {.lex_state = 24},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 24},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 14},
  [215] = {.lex_state = 28},
  [216] = {.lex_state = 41},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 24},
  [223] = {.lex_state = 5, .external_lex_state = 4},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 33},
  [226] = {.lex_state = 5, .external_lex_state = 4},
  [227] = {.lex_state = 17, .external_lex_state = 4},
  [228] = {.lex_state = 42},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 21},
  [231] = {.lex_state = 21},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 33},
  [234] = {.lex_state = 5, .external_lex_state = 4},
  [235] = {.lex_state = 5, .external_lex_state = 4},
  [236] = {.lex_state = 5, .external_lex_state = 4},
  [237] = {.lex_state = 44},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 21},
  [240] = {.lex_state = 5, .external_lex_state = 4},
  [241] = {.lex_state = 17, .external_lex_state = 4},
  [242] = {.lex_state = 5, .external_lex_state = 4},
  [243] = {.lex_state = 5, .external_lex_state = 4},
  [244] = {.lex_state = 17, .external_lex_state = 4},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 173},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 18, .external_lex_state = 4},
  [249] = {.lex_state = 52},
  [250] = {.lex_state = 33},
  [251] = {.lex_state = 173, .external_lex_state = 5},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 173},
  [254] = {.lex_state = 173, .external_lex_state = 5},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 17, .external_lex_state = 4},
  [257] = {.lex_state = 17},
  [258] = {.lex_state = 57},
  [259] = {.lex_state = 57},
  [260] = {.lex_state = 57},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 14},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 57},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 57},
  [269] = {.lex_state = 18},
  [270] = {.lex_state = 52},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 173},
  [273] = {.lex_state = 25},
  [274] = {.lex_state = 25},
  [275] = {.lex_state = 25},
  [276] = {.lex_state = 25},
  [277] = {.lex_state = 25},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 12},
  [282] = {.lex_state = 52},
  [283] = {.lex_state = 13},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 13},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 13},
  [288] = {.lex_state = 173},
  [289] = {.lex_state = 173, .external_lex_state = 5},
  [290] = {.lex_state = 18},
  [291] = {.lex_state = 13},
  [292] = {.lex_state = 13},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 52},
  [295] = {.lex_state = 173},
  [296] = {.lex_state = 173},
  [297] = {.lex_state = 52},
  [298] = {.lex_state = 52},
  [299] = {.lex_state = 57},
  [300] = {.lex_state = 52},
  [301] = {.lex_state = 52},
  [302] = {.lex_state = 52},
  [303] = {.lex_state = 52},
  [304] = {.lex_state = 52},
  [305] = {.lex_state = 52},
  [306] = {.lex_state = 52},
  [307] = {.lex_state = 52},
  [308] = {.lex_state = 52},
  [309] = {.lex_state = 52},
  [310] = {.lex_state = 52},
  [311] = {.lex_state = 52},
  [312] = {.lex_state = 52},
  [313] = {.lex_state = 52},
  [314] = {.lex_state = 52},
  [315] = {.lex_state = 52},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 173},
  [319] = {.lex_state = 15},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 59},
  [322] = {.lex_state = 41},
  [323] = {.lex_state = 58},
  [324] = {.lex_state = 45},
  [325] = {.lex_state = 15},
  [326] = {.lex_state = 15},
  [327] = {.lex_state = 173},
  [328] = {.lex_state = 173},
  [329] = {.lex_state = 5, .external_lex_state = 4},
  [330] = {.lex_state = 173, .external_lex_state = 5},
  [331] = {.lex_state = 5, .external_lex_state = 4},
  [332] = {.lex_state = 173},
  [333] = {.lex_state = 15},
  [334] = {.lex_state = 173},
  [335] = {.lex_state = 5, .external_lex_state = 4},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 51},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 51},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 5, .external_lex_state = 4},
  [342] = {.lex_state = 5, .external_lex_state = 4},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 5, .external_lex_state = 4},
  [345] = {.lex_state = 55},
  [346] = {.lex_state = 173},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 173},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 60},
  [351] = {.lex_state = 173},
  [352] = {.lex_state = 173},
  [353] = {.lex_state = 173},
  [354] = {.lex_state = 173},
  [355] = {.lex_state = 59},
  [356] = {.lex_state = 173},
  [357] = {.lex_state = 53},
  [358] = {.lex_state = 5},
  [359] = {.lex_state = 5},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 173},
  [362] = {.lex_state = 269},
  [363] = {.lex_state = 5},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 173},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 5},
  [368] = {.lex_state = 61},
  [369] = {.lex_state = 173},
  [370] = {.lex_state = 61},
  [371] = {.lex_state = 269},
  [372] = {.lex_state = 173},
  [373] = {.lex_state = 5},
  [374] = {.lex_state = 173},
  [375] = {.lex_state = 173},
  [376] = {.lex_state = 208},
  [377] = {.lex_state = 5},
  [378] = {.lex_state = 173},
  [379] = {.lex_state = 61},
  [380] = {.lex_state = 5},
  [381] = {.lex_state = 5},
  [382] = {.lex_state = 173},
  [383] = {.lex_state = 61},
  [384] = {.lex_state = 5},
  [385] = {.lex_state = 5},
  [386] = {.lex_state = 173},
  [387] = {.lex_state = 53},
  [388] = {.lex_state = 5},
  [389] = {.lex_state = 5},
  [390] = {.lex_state = 173},
  [391] = {.lex_state = 5},
  [392] = {.lex_state = 173},
  [393] = {.lex_state = 5},
  [394] = {.lex_state = 5},
  [395] = {.lex_state = 173},
  [396] = {.lex_state = 5},
  [397] = {.lex_state = 55},
  [398] = {.lex_state = 173},
  [399] = {.lex_state = 5},
  [400] = {.lex_state = 173},
  [401] = {.lex_state = 5},
  [402] = {.lex_state = 173},
  [403] = {.lex_state = 208},
  [404] = {.lex_state = 173},
  [405] = {.lex_state = 5},
  [406] = {.lex_state = 173},
  [407] = {.lex_state = 5},
  [408] = {.lex_state = 173},
  [409] = {.lex_state = 173},
  [410] = {.lex_state = 60},
  [411] = {.lex_state = 173},
  [412] = {.lex_state = 60},
  [413] = {.lex_state = 173},
  [414] = {.lex_state = 60},
  [415] = {.lex_state = 60},
  [416] = {.lex_state = 60},
  [417] = {.lex_state = 60},
  [418] = {.lex_state = 60},
  [419] = {.lex_state = 60},
  [420] = {.lex_state = 60},
  [421] = {.lex_state = 60},
  [422] = {.lex_state = 60},
  [423] = {.lex_state = 60},
  [424] = {.lex_state = 60},
  [425] = {.lex_state = 60},
  [426] = {.lex_state = 55},
  [427] = {.lex_state = 173},
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
    [sym_source_file] = STATE(365),
    [sym_instruction] = STATE(367),
    [sym_from_instruction] = STATE(394),
    [sym_run_instruction] = STATE(394),
    [sym_cmd_instruction] = STATE(394),
    [sym_label_instruction] = STATE(394),
    [sym_expose_instruction] = STATE(394),
    [sym_env_instruction] = STATE(394),
    [sym_add_instruction] = STATE(394),
    [sym_copy_instruction] = STATE(394),
    [sym_entrypoint_instruction] = STATE(394),
    [sym_volume_instruction] = STATE(394),
    [sym_user_instruction] = STATE(394),
    [sym_workdir_instruction] = STATE(394),
    [sym_arg_instruction] = STATE(394),
    [sym_onbuild_instruction] = STATE(394),
    [sym_stopsignal_instruction] = STATE(394),
    [sym_healthcheck_instruction] = STATE(394),
    [sym_shell_instruction] = STATE(394),
    [sym_maintainer_instruction] = STATE(394),
    [sym_cross_build_instruction] = STATE(394),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(367), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(394), 19,
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
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(56), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(59), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(62), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(65), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(68), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(71), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(74), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(77), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(80), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(83), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(86), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(89), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(92), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(95), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(98), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(101), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(104), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(107), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(367), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(110), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(394), 19,
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
    STATE(389), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(394), 19,
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
    ACTIONS(51), 22,
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
    STATE(30), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(244), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(235), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(19), 3,
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
    STATE(30), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(244), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(236), 2,
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
    STATE(106), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(133), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(40), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(265), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [438] = 8,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(149), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(151), 1,
      anon_sym_BSLASH2,
    STATE(42), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(147), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [469] = 8,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(163), 1,
      anon_sym_BSLASH2,
    STATE(42), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(158), 5,
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
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(102), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(381), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [534] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(102), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(405), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [568] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_path_token1,
    ACTIONS(178), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH,
    ACTIONS(184), 1,
      sym_heredoc_marker,
    STATE(99), 1,
      aux_sym_add_instruction_repeat2,
    STATE(135), 1,
      sym_expansion,
    STATE(387), 1,
      sym_path_with_heredoc,
    STATE(15), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [604] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(151), 1,
      anon_sym_BSLASH2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DOLLAR2,
    STATE(42), 1,
      sym_imm_expansion,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(110), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [638] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_path_token1,
    ACTIONS(178), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH,
    ACTIONS(184), 1,
      sym_heredoc_marker,
    STATE(83), 1,
      aux_sym_add_instruction_repeat2,
    STATE(135), 1,
      sym_expansion,
    STATE(387), 1,
      sym_path_with_heredoc,
    STATE(51), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [674] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_path_token1,
    ACTIONS(178), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH,
    ACTIONS(184), 1,
      sym_heredoc_marker,
    STATE(85), 1,
      aux_sym_add_instruction_repeat2,
    STATE(135), 1,
      sym_expansion,
    STATE(387), 1,
      sym_path_with_heredoc,
    STATE(51), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [710] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_path_token1,
    ACTIONS(178), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH,
    ACTIONS(184), 1,
      sym_heredoc_marker,
    STATE(101), 1,
      aux_sym_add_instruction_repeat2,
    STATE(135), 1,
      sym_expansion,
    STATE(387), 1,
      sym_path_with_heredoc,
    STATE(16), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [746] = 11,
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
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(247), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(396), 2,
      sym_shell_command,
      sym_json_string_array,
  [782] = 5,
    ACTIONS(204), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(207), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(19), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(202), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [806] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(151), 1,
      anon_sym_BSLASH2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DOLLAR2,
    STATE(42), 1,
      sym_imm_expansion,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(109), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [840] = 11,
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
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(247), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(366), 2,
      sym_shell_command,
      sym_json_string_array,
  [876] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(102), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(407), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [910] = 9,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 1,
      aux_sym_label_pair_token1,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_semgrep_metavariable,
    ACTIONS(219), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(24), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(356), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [941] = 9,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 1,
      aux_sym_label_pair_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      sym_semgrep_metavariable,
    ACTIONS(235), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(24), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(356), 2,
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
    STATE(27), 1,
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
    STATE(25), 1,
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
  [1059] = 9,
    ACTIONS(261), 1,
      aux_sym_path_token2,
    ACTIONS(264), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(267), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(270), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(273), 1,
      sym_required_line_continuation,
    ACTIONS(275), 1,
      sym_heredoc_marker,
    STATE(29), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(259), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1089] = 9,
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
    ACTIONS(280), 1,
      sym_required_line_continuation,
    STATE(29), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(278), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1119] = 7,
    ACTIONS(284), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(286), 1,
      anon_sym_DOLLAR2,
    ACTIONS(288), 1,
      aux_sym_image_name_token2,
    STATE(124), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(32), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(282), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1145] = 7,
    ACTIONS(292), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(294), 1,
      anon_sym_DOLLAR2,
    ACTIONS(297), 1,
      aux_sym_image_name_token2,
    STATE(124), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(32), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1171] = 3,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(302), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1189] = 8,
    ACTIONS(211), 1,
      aux_sym_label_pair_token1,
    ACTIONS(219), 1,
      sym_semgrep_ellipsis,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(356), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1217] = 7,
    ACTIONS(286), 1,
      anon_sym_DOLLAR2,
    ACTIONS(288), 1,
      aux_sym_image_name_token2,
    ACTIONS(312), 1,
      aux_sym_from_instruction_token2,
    STATE(124), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(31), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(310), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1243] = 7,
    ACTIONS(286), 1,
      anon_sym_DOLLAR2,
    ACTIONS(288), 1,
      aux_sym_image_name_token2,
    ACTIONS(316), 1,
      aux_sym_from_instruction_token2,
    STATE(124), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(32), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(314), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1269] = 7,
    ACTIONS(286), 1,
      anon_sym_DOLLAR2,
    ACTIONS(288), 1,
      aux_sym_image_name_token2,
    ACTIONS(320), 1,
      aux_sym_from_instruction_token2,
    STATE(124), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(36), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(318), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1295] = 3,
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
  [1313] = 3,
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
  [1331] = 8,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH2,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(106), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(147), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(41), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1359] = 8,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR2,
    ACTIONS(333), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(336), 1,
      anon_sym_BSLASH2,
    STATE(106), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(41), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1387] = 3,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1405] = 3,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(345), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1423] = 3,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
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
  [1459] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(355), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(357), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1476] = 8,
    ACTIONS(359), 1,
      anon_sym_DOLLAR2,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    ACTIONS(370), 1,
      sym_double_quoted_escape_sequence,
    STATE(165), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(47), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1503] = 7,
    ACTIONS(375), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(378), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    STATE(219), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(48), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1528] = 7,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(383), 1,
      anon_sym_DASH_DASH,
    ACTIONS(385), 1,
      sym_semgrep_ellipsis,
    STATE(380), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
    STATE(131), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1553] = 7,
    ACTIONS(389), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(391), 1,
      anon_sym_DOLLAR2,
    ACTIONS(394), 1,
      aux_sym_image_tag_token1,
    STATE(178), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(50), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [1578] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_path_token1,
    ACTIONS(401), 1,
      anon_sym_DASH_DASH,
    ACTIONS(399), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
    STATE(51), 3,
      sym_param,
      sym_flag_param,
      aux_sym_add_instruction_repeat1,
  [1601] = 7,
    ACTIONS(406), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    STATE(219), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(48), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1626] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(410), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(412), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1643] = 7,
    ACTIONS(406), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    STATE(219), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(48), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1668] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(416), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(418), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1685] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(420), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(422), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1702] = 9,
    ACTIONS(188), 1,
      aux_sym_path_token2,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(194), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(200), 1,
      sym_heredoc_marker,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(280), 1,
      sym_required_line_continuation,
    ACTIONS(424), 1,
      aux_sym_shell_fragment_token2,
    STATE(61), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [1731] = 7,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      aux_sym_path_token3,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(62), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1756] = 7,
    ACTIONS(428), 1,
      aux_sym_path_token3,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    ACTIONS(434), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(63), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1781] = 7,
    ACTIONS(428), 1,
      aux_sym_path_token3,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    ACTIONS(438), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(64), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1806] = 9,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(273), 1,
      sym_required_line_continuation,
    ACTIONS(442), 1,
      aux_sym_path_token2,
    ACTIONS(445), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(448), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(451), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(454), 1,
      sym_heredoc_marker,
    STATE(61), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [1835] = 7,
    ACTIONS(428), 1,
      aux_sym_path_token3,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(459), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(68), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1860] = 7,
    ACTIONS(428), 1,
      aux_sym_path_token3,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    ACTIONS(461), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(463), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(68), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1885] = 7,
    ACTIONS(428), 1,
      aux_sym_path_token3,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    ACTIONS(465), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(68), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1910] = 8,
    ACTIONS(469), 1,
      anon_sym_DOLLAR2,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym_double_quoted_escape_sequence,
    STATE(165), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(47), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1937] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(481), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(479), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1954] = 7,
    ACTIONS(406), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    STATE(219), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(52), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1979] = 7,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 1,
      aux_sym_path_token3,
    ACTIONS(490), 1,
      anon_sym_DOLLAR2,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(493), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(68), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2004] = 7,
    ACTIONS(497), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(499), 1,
      anon_sym_DOLLAR2,
    ACTIONS(501), 1,
      aux_sym_image_tag_token1,
    STATE(178), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(50), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [2029] = 3,
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
  [2046] = 7,
    ACTIONS(406), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    STATE(219), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(54), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2071] = 8,
    ACTIONS(469), 1,
      anon_sym_DOLLAR2,
    ACTIONS(473), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    ACTIONS(511), 1,
      anon_sym_BSLASH,
    ACTIONS(513), 1,
      sym_double_quoted_escape_sequence,
    STATE(165), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(65), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2098] = 8,
    ACTIONS(469), 1,
      anon_sym_DOLLAR2,
    ACTIONS(473), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    ACTIONS(519), 1,
      sym_double_quoted_escape_sequence,
    STATE(165), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(74), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2125] = 8,
    ACTIONS(469), 1,
      anon_sym_DOLLAR2,
    ACTIONS(473), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(47), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2152] = 8,
    ACTIONS(469), 1,
      anon_sym_DOLLAR2,
    ACTIONS(473), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      anon_sym_BSLASH,
    ACTIONS(527), 1,
      sym_double_quoted_escape_sequence,
    STATE(165), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2179] = 8,
    ACTIONS(469), 1,
      anon_sym_DOLLAR2,
    ACTIONS(473), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(475), 1,
      anon_sym_BSLASH,
    ACTIONS(477), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(47), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [2206] = 7,
    ACTIONS(406), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    ACTIONS(531), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_imm_expansion,
    STATE(219), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(48), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2230] = 7,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(537), 1,
      anon_sym_DOLLAR2,
    ACTIONS(539), 1,
      sym_non_newline_whitespace,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(88), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2254] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(541), 1,
      aux_sym_path_token1,
    ACTIONS(543), 1,
      aux_sym_path_token2,
    ACTIONS(545), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(290), 1,
      sym_path,
    STATE(364), 1,
      sym_json_string_array,
  [2282] = 8,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(547), 1,
      aux_sym_shell_fragment_token2,
    STATE(30), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(256), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2308] = 6,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      anon_sym_DOLLAR,
    ACTIONS(554), 1,
      aux_sym_expose_port_token1,
    ACTIONS(557), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(81), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2330] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    ACTIONS(562), 1,
      aux_sym_image_name_token1,
    ACTIONS(564), 1,
      anon_sym_DASH_DASH,
    STATE(37), 1,
      sym_expansion,
    STATE(132), 1,
      sym_image_name,
    STATE(189), 1,
      sym_param,
    STATE(333), 1,
      sym_image_spec,
  [2358] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_path_token1,
    ACTIONS(568), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(570), 1,
      anon_sym_DOLLAR,
    ACTIONS(572), 1,
      sym_heredoc_marker,
    STATE(60), 1,
      sym_expansion,
    STATE(84), 1,
      aux_sym_add_instruction_repeat2,
    STATE(173), 1,
      sym_path_with_heredoc,
  [2386] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(574), 1,
      aux_sym_path_token1,
    ACTIONS(577), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    ACTIONS(583), 1,
      sym_heredoc_marker,
    STATE(84), 1,
      aux_sym_add_instruction_repeat2,
    STATE(135), 1,
      sym_expansion,
    STATE(387), 1,
      sym_path_with_heredoc,
  [2414] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_path_token1,
    ACTIONS(568), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(570), 1,
      anon_sym_DOLLAR,
    ACTIONS(572), 1,
      sym_heredoc_marker,
    STATE(60), 1,
      sym_expansion,
    STATE(84), 1,
      aux_sym_add_instruction_repeat2,
    STATE(183), 1,
      sym_path_with_heredoc,
  [2442] = 7,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(537), 1,
      anon_sym_DOLLAR2,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      sym_non_newline_whitespace,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(100), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2466] = 7,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(537), 1,
      anon_sym_DOLLAR2,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 1,
      sym_non_newline_whitespace,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(100), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2490] = 7,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(537), 1,
      anon_sym_DOLLAR2,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 1,
      sym_non_newline_whitespace,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(100), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2514] = 7,
    ACTIONS(406), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    STATE(219), 1,
      sym_immediate_expansion,
    STATE(401), 1,
      sym_immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(77), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2538] = 7,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(602), 1,
      anon_sym_DOLLAR2,
    ACTIONS(604), 1,
      aux_sym_image_digest_token1,
    STATE(220), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(91), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2562] = 7,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(608), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(610), 1,
      anon_sym_DOLLAR2,
    ACTIONS(613), 1,
      aux_sym_image_digest_token1,
    STATE(220), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(91), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2586] = 6,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      anon_sym_DOLLAR,
    ACTIONS(620), 1,
      aux_sym_expose_port_token1,
    ACTIONS(622), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(81), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2608] = 3,
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
  [2624] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(410), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(412), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2640] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(420), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(422), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2656] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(416), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(418), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2672] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(355), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(357), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2688] = 8,
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
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(320), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2714] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_path_token1,
    ACTIONS(568), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(570), 1,
      anon_sym_DOLLAR,
    ACTIONS(572), 1,
      sym_heredoc_marker,
    STATE(60), 1,
      sym_expansion,
    STATE(84), 1,
      aux_sym_add_instruction_repeat2,
    STATE(188), 1,
      sym_path_with_heredoc,
  [2742] = 7,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      sym_non_newline_whitespace,
    ACTIONS(624), 1,
      aux_sym_path_token3,
    ACTIONS(627), 1,
      anon_sym_DOLLAR2,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(100), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2766] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_path_token1,
    ACTIONS(568), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(570), 1,
      anon_sym_DOLLAR,
    ACTIONS(572), 1,
      sym_heredoc_marker,
    STATE(60), 1,
      sym_expansion,
    STATE(84), 1,
      aux_sym_add_instruction_repeat2,
    STATE(175), 1,
      sym_path_with_heredoc,
  [2794] = 7,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(230), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(103), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2818] = 7,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(630), 1,
      anon_sym_DOLLAR2,
    ACTIONS(633), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(636), 1,
      anon_sym_BSLASH2,
    STATE(230), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(103), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2842] = 7,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(537), 1,
      anon_sym_DOLLAR2,
    ACTIONS(639), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      sym_non_newline_whitespace,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(86), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2866] = 7,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(537), 1,
      anon_sym_DOLLAR2,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(645), 1,
      sym_non_newline_whitespace,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(87), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2890] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(341), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [2905] = 6,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      anon_sym_DOLLAR2,
    ACTIONS(651), 1,
      aux_sym_image_alias_token2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(116), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [2926] = 6,
    ACTIONS(459), 1,
      sym_non_newline_whitespace,
    ACTIONS(653), 1,
      aux_sym_path_token3,
    ACTIONS(655), 1,
      anon_sym_DOLLAR2,
    STATE(260), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(111), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2947] = 3,
    ACTIONS(657), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(659), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2962] = 3,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(663), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2977] = 6,
    ACTIONS(493), 1,
      sym_non_newline_whitespace,
    ACTIONS(665), 1,
      aux_sym_path_token3,
    ACTIONS(668), 1,
      anon_sym_DOLLAR2,
    STATE(260), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(111), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2998] = 3,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(673), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3013] = 6,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(680), 1,
      anon_sym_DOLLAR2,
    STATE(280), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(113), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3034] = 3,
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
  [3049] = 6,
    ACTIONS(649), 1,
      anon_sym_DOLLAR2,
    ACTIONS(651), 1,
      aux_sym_image_alias_token2,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(120), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3070] = 6,
    ACTIONS(649), 1,
      anon_sym_DOLLAR2,
    ACTIONS(651), 1,
      aux_sym_image_alias_token2,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(120), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3091] = 4,
    ACTIONS(687), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(689), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3108] = 6,
    ACTIONS(463), 1,
      sym_non_newline_whitespace,
    ACTIONS(653), 1,
      aux_sym_path_token3,
    ACTIONS(655), 1,
      anon_sym_DOLLAR2,
    STATE(260), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(111), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3129] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_EQ,
    ACTIONS(695), 1,
      aux_sym_path_token1,
    ACTIONS(697), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [3148] = 6,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(701), 1,
      anon_sym_DOLLAR2,
    ACTIONS(704), 1,
      aux_sym_image_alias_token2,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(120), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3169] = 6,
    ACTIONS(467), 1,
      sym_non_newline_whitespace,
    ACTIONS(653), 1,
      aux_sym_path_token3,
    ACTIONS(655), 1,
      anon_sym_DOLLAR2,
    STATE(260), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(111), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3190] = 6,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      sym_array_element,
    STATE(318), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(711), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3211] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(715), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(713), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3226] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(339), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3241] = 6,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 1,
      aux_sym_env_key_token1,
    ACTIONS(721), 1,
      sym_semgrep_ellipsis,
    STATE(353), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(145), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3262] = 6,
    ACTIONS(432), 1,
      sym_non_newline_whitespace,
    ACTIONS(653), 1,
      aux_sym_path_token3,
    ACTIONS(655), 1,
      anon_sym_DOLLAR2,
    STATE(260), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(108), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3283] = 6,
    ACTIONS(436), 1,
      sym_non_newline_whitespace,
    ACTIONS(653), 1,
      aux_sym_path_token3,
    ACTIONS(655), 1,
      anon_sym_DOLLAR2,
    STATE(260), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(118), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3304] = 6,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      aux_sym_path_token3,
    ACTIONS(725), 1,
      anon_sym_DOLLAR2,
    STATE(275), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(136), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3325] = 6,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      aux_sym_path_token3,
    ACTIONS(725), 1,
      anon_sym_DOLLAR2,
    STATE(275), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(137), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3346] = 6,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(731), 1,
      anon_sym_DOLLAR2,
    STATE(280), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(149), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3367] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(383), 1,
      anon_sym_DASH_DASH,
    ACTIONS(733), 1,
      sym_semgrep_ellipsis,
    STATE(393), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(164), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [3388] = 7,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(739), 1,
      anon_sym_COLON,
    ACTIONS(741), 1,
      anon_sym_AT,
    STATE(245), 1,
      sym_image_tag,
    STATE(325), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3411] = 3,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3426] = 3,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(749), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3441] = 6,
    ACTIONS(440), 1,
      sym_non_newline_whitespace,
    ACTIONS(653), 1,
      aux_sym_path_token3,
    ACTIONS(655), 1,
      anon_sym_DOLLAR2,
    STATE(260), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(121), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3462] = 6,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      aux_sym_path_token3,
    ACTIONS(725), 1,
      anon_sym_DOLLAR2,
    STATE(275), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(147), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3483] = 6,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      aux_sym_path_token3,
    ACTIONS(725), 1,
      anon_sym_DOLLAR2,
    STATE(275), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(147), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3504] = 6,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      aux_sym_path_token3,
    ACTIONS(725), 1,
      anon_sym_DOLLAR2,
    STATE(275), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(147), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3525] = 3,
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
  [3540] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(302), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3555] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(347), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3570] = 3,
    ACTIONS(751), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(753), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3585] = 3,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(757), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3600] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(761), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(759), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3615] = 6,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 1,
      aux_sym_env_key_token1,
    ACTIONS(768), 1,
      sym_semgrep_ellipsis,
    STATE(353), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(145), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3636] = 5,
    ACTIONS(771), 1,
      anon_sym_DOLLAR,
    ACTIONS(773), 1,
      aux_sym_expose_port_token1,
    ACTIONS(775), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(92), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [3655] = 6,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(777), 1,
      aux_sym_path_token3,
    ACTIONS(780), 1,
      anon_sym_DOLLAR2,
    STATE(275), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(147), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3676] = 6,
    ACTIONS(729), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(731), 1,
      anon_sym_DOLLAR2,
    ACTIONS(783), 1,
      anon_sym_LF,
    STATE(280), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(113), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3697] = 6,
    ACTIONS(729), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(731), 1,
      anon_sym_DOLLAR2,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(280), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(113), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3718] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(345), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(343), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3733] = 6,
    ACTIONS(729), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(731), 1,
      anon_sym_DOLLAR2,
    ACTIONS(787), 1,
      anon_sym_LF,
    STATE(280), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(148), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3754] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(345), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3769] = 6,
    ACTIONS(649), 1,
      anon_sym_DOLLAR2,
    ACTIONS(651), 1,
      aux_sym_image_alias_token2,
    ACTIONS(789), 1,
      anon_sym_LF,
    STATE(291), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(115), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3790] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(349), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3805] = 3,
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
  [3820] = 6,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      sym_array_element,
    STATE(318), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(711), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3841] = 6,
    ACTIONS(793), 1,
      aux_sym_env_key_token1,
    ACTIONS(795), 1,
      sym_semgrep_ellipsis,
    STATE(339), 1,
      sym_env_key,
    STATE(363), 1,
      sym_spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(125), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3862] = 6,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      aux_sym_path_token3,
    ACTIONS(725), 1,
      anon_sym_DOLLAR2,
    STATE(275), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(138), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3883] = 6,
    ACTIONS(797), 1,
      anon_sym_BSLASH,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(803), 1,
      sym_single_quoted_escape_sequence,
    STATE(171), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3903] = 7,
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
    STATE(158), 1,
      sym_expansion,
    STATE(347), 1,
      sym_path,
  [3925] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym_path_token1,
    ACTIONS(543), 1,
      aux_sym_path_token2,
    ACTIONS(545), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(343), 1,
      sym_path,
  [3947] = 6,
    ACTIONS(797), 1,
      anon_sym_BSLASH,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(803), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(811), 1,
      anon_sym_SQUOTE,
    STATE(171), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3967] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DOLLAR2,
    ACTIONS(501), 1,
      aux_sym_image_tag_token1,
    STATE(178), 1,
      sym_imm_expansion,
    STATE(69), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [3987] = 5,
    ACTIONS(813), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(815), 1,
      anon_sym_DASH_DASH,
    ACTIONS(818), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(164), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [4005] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(341), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4019] = 5,
    ACTIONS(602), 1,
      anon_sym_DOLLAR2,
    ACTIONS(604), 1,
      aux_sym_image_digest_token1,
    STATE(220), 1,
      sym_imm_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(90), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [4037] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(823), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(821), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4051] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(345), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4065] = 5,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      sym_json_string,
    STATE(328), 1,
      sym_array_element,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(711), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4083] = 6,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(825), 1,
      anon_sym_BSLASH,
    ACTIONS(827), 1,
      anon_sym_SQUOTE,
    ACTIONS(829), 1,
      sym_single_quoted_escape_sequence,
    STATE(162), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4103] = 6,
    ACTIONS(831), 1,
      anon_sym_BSLASH,
    ACTIONS(834), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(839), 1,
      sym_single_quoted_escape_sequence,
    STATE(171), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4123] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_path_token1,
    ACTIONS(481), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4139] = 5,
    ACTIONS(842), 1,
      anon_sym_LF,
    ACTIONS(844), 1,
      sym_non_newline_whitespace,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(234), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4157] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(848), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(850), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4171] = 5,
    ACTIONS(844), 1,
      sym_non_newline_whitespace,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(852), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(226), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4189] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(349), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4203] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(759), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4217] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(339), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4231] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(345), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(343), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4245] = 3,
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
  [4259] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(347), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4273] = 3,
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
  [4287] = 5,
    ACTIONS(844), 1,
      sym_non_newline_whitespace,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(854), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(202), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4305] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(347), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4319] = 3,
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
  [4333] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(339), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4347] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(343), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4361] = 5,
    ACTIONS(844), 1,
      sym_non_newline_whitespace,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(856), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(223), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4379] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    ACTIONS(562), 1,
      aux_sym_image_name_token1,
    STATE(37), 1,
      sym_expansion,
    STATE(132), 1,
      sym_image_name,
    STATE(326), 1,
      sym_image_spec,
  [4401] = 6,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      anon_sym_SQUOTE,
    ACTIONS(862), 1,
      sym_single_quoted_escape_sequence,
    STATE(191), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4421] = 6,
    ACTIONS(797), 1,
      anon_sym_BSLASH,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(803), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(864), 1,
      anon_sym_SQUOTE,
    STATE(171), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4441] = 6,
    ACTIONS(801), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      anon_sym_SQUOTE,
    ACTIONS(870), 1,
      sym_single_quoted_escape_sequence,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4461] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(872), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(874), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4475] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(349), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4488] = 3,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4501] = 3,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(878), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4514] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(257), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4527] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(302), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4540] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(880), 1,
      aux_sym_path_token1,
    ACTIONS(882), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [4555] = 3,
    ACTIONS(884), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(886), 3,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      sym_semgrep_ellipsis,
  [4568] = 5,
    ACTIONS(888), 1,
      anon_sym_DOLLAR,
    ACTIONS(890), 1,
      aux_sym_image_alias_token1,
    STATE(107), 1,
      sym_expansion,
    STATE(377), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4585] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(892), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(240), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4600] = 5,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
    ACTIONS(896), 1,
      aux_sym_json_string_token1,
    ACTIONS(899), 1,
      sym_json_escape_sequence,
    STATE(203), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4617] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(761), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4630] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(341), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4643] = 3,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4656] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(345), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4669] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(353), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4682] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4693] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4704] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4715] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4726] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4737] = 3,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(761), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4750] = 3,
    ACTIONS(904), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(902), 3,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
  [4763] = 5,
    ACTIONS(906), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(908), 1,
      anon_sym_DOLLAR,
    STATE(130), 1,
      sym_expansion,
    STATE(349), 1,
      sym_stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4780] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(910), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4791] = 3,
    ACTIONS(912), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(914), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4804] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(916), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4815] = 3,
    ACTIONS(341), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4828] = 3,
    ACTIONS(345), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4841] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(872), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(874), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4854] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(918), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(240), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4869] = 3,
    ACTIONS(922), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(920), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4882] = 5,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    ACTIONS(926), 1,
      aux_sym_json_string_token1,
    ACTIONS(928), 1,
      sym_json_escape_sequence,
    STATE(233), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4899] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(930), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(240), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4914] = 4,
    ACTIONS(934), 1,
      sym_required_line_continuation,
    STATE(241), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(932), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4929] = 5,
    ACTIONS(888), 1,
      anon_sym_DOLLAR,
    ACTIONS(890), 1,
      aux_sym_image_alias_token1,
    STATE(107), 1,
      sym_expansion,
    STATE(359), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4946] = 3,
    ACTIONS(349), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4959] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(341), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4972] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(345), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4985] = 3,
    ACTIONS(353), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4998] = 5,
    ACTIONS(926), 1,
      aux_sym_json_string_token1,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      sym_json_escape_sequence,
    STATE(203), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5015] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(940), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(240), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5030] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(942), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(242), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5045] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(944), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(243), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5060] = 5,
    ACTIONS(946), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(948), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(340), 1,
      sym_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5077] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(349), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5090] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(353), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5103] = 4,
    ACTIONS(950), 1,
      anon_sym_LF,
    ACTIONS(952), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(240), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5118] = 4,
    ACTIONS(957), 1,
      sym_required_line_continuation,
    STATE(241), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(955), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [5133] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(960), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(240), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5148] = 4,
    ACTIONS(846), 1,
      sym_heredoc_nl,
    ACTIONS(942), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(240), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [5163] = 4,
    ACTIONS(934), 1,
      sym_required_line_continuation,
    STATE(227), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(962), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [5178] = 5,
    ACTIONS(741), 1,
      anon_sym_AT,
    ACTIONS(964), 1,
      anon_sym_LF,
    ACTIONS(966), 1,
      aux_sym_from_instruction_token2,
    STATE(319), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5195] = 4,
    ACTIONS(968), 1,
      anon_sym_COMMA2,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5209] = 4,
    ACTIONS(962), 1,
      anon_sym_LF,
    ACTIONS(972), 1,
      sym_required_line_continuation,
    STATE(252), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5223] = 3,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
  [5235] = 4,
    ACTIONS(974), 1,
      anon_sym_LBRACE,
    ACTIONS(976), 1,
      sym_variable,
    STATE(168), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5249] = 3,
    ACTIONS(980), 1,
      sym_json_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_DQUOTE,
      aux_sym_json_string_token1,
  [5261] = 4,
    ACTIONS(982), 1,
      sym_heredoc_line,
    ACTIONS(984), 1,
      sym_heredoc_end,
    STATE(254), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5275] = 4,
    ACTIONS(932), 1,
      anon_sym_LF,
    ACTIONS(972), 1,
      sym_required_line_continuation,
    STATE(257), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5289] = 4,
    ACTIONS(968), 1,
      anon_sym_COMMA2,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5303] = 4,
    ACTIONS(982), 1,
      sym_heredoc_line,
    ACTIONS(988), 1,
      sym_heredoc_end,
    STATE(289), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5317] = 4,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    ACTIONS(992), 1,
      sym_variable,
    STATE(150), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5331] = 3,
    ACTIONS(994), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(955), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [5343] = 4,
    ACTIONS(955), 1,
      anon_sym_LF,
    ACTIONS(996), 1,
      sym_required_line_continuation,
    STATE(257), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5357] = 3,
    ACTIONS(349), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5369] = 3,
    ACTIONS(761), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5381] = 3,
    ACTIONS(341), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5393] = 3,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(745), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5405] = 3,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(749), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5417] = 3,
    ACTIONS(872), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5429] = 3,
    ACTIONS(345), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5441] = 3,
    ACTIONS(999), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1001), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5453] = 3,
    ACTIONS(751), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(753), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5465] = 3,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(757), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5477] = 3,
    ACTIONS(353), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5489] = 4,
    ACTIONS(1003), 1,
      anon_sym_LF,
    ACTIONS(1005), 1,
      sym_non_newline_whitespace,
    STATE(271), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5503] = 4,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    ACTIONS(992), 1,
      sym_variable,
    STATE(144), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5517] = 4,
    ACTIONS(1007), 1,
      anon_sym_LF,
    ACTIONS(1009), 1,
      sym_non_newline_whitespace,
    STATE(271), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5531] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(481), 3,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
      sym_semgrep_ellipsis,
  [5541] = 3,
    ACTIONS(349), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5553] = 3,
    ACTIONS(761), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5565] = 3,
    ACTIONS(341), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5577] = 3,
    ACTIONS(345), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5589] = 3,
    ACTIONS(353), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5601] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5611] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5621] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5631] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5641] = 4,
    ACTIONS(1012), 1,
      anon_sym_LBRACE,
    ACTIONS(1014), 1,
      sym_variable,
    STATE(292), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5655] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1016), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5665] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1018), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5675] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5685] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5695] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5705] = 4,
    ACTIONS(1020), 1,
      anon_sym_COMMA2,
    ACTIONS(1023), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5719] = 4,
    ACTIONS(1025), 1,
      sym_heredoc_line,
    ACTIONS(1028), 1,
      sym_heredoc_end,
    STATE(289), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5733] = 4,
    ACTIONS(1005), 1,
      sym_non_newline_whitespace,
    ACTIONS(1030), 1,
      anon_sym_LF,
    STATE(269), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5747] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5757] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5767] = 3,
    ACTIONS(1032), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1034), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5779] = 4,
    ACTIONS(1036), 1,
      anon_sym_LBRACE,
    ACTIONS(1038), 1,
      sym_variable,
    STATE(214), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5793] = 4,
    ACTIONS(968), 1,
      anon_sym_COMMA2,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5807] = 4,
    ACTIONS(968), 1,
      anon_sym_COMMA2,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5821] = 4,
    ACTIONS(1044), 1,
      anon_sym_LBRACE,
    ACTIONS(1046), 1,
      sym_variable,
    STATE(264), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5835] = 4,
    ACTIONS(1044), 1,
      anon_sym_LBRACE,
    ACTIONS(1046), 1,
      sym_variable,
    STATE(259), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5849] = 3,
    ACTIONS(872), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5861] = 4,
    ACTIONS(1048), 1,
      anon_sym_LBRACE,
    ACTIONS(1050), 1,
      sym_variable,
    STATE(207), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5875] = 4,
    ACTIONS(1048), 1,
      anon_sym_LBRACE,
    ACTIONS(1050), 1,
      sym_variable,
    STATE(204), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5889] = 4,
    ACTIONS(1052), 1,
      anon_sym_LBRACE,
    ACTIONS(1054), 1,
      sym_variable,
    STATE(212), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5903] = 4,
    ACTIONS(1052), 1,
      anon_sym_LBRACE,
    ACTIONS(1054), 1,
      sym_variable,
    STATE(210), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5917] = 4,
    ACTIONS(1056), 1,
      anon_sym_LBRACE,
    ACTIONS(1058), 1,
      sym_variable,
    STATE(276), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5931] = 4,
    ACTIONS(1056), 1,
      anon_sym_LBRACE,
    ACTIONS(1058), 1,
      sym_variable,
    STATE(274), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5945] = 4,
    ACTIONS(1060), 1,
      anon_sym_LBRACE,
    ACTIONS(1062), 1,
      sym_variable,
    STATE(281), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5959] = 4,
    ACTIONS(1060), 1,
      anon_sym_LBRACE,
    ACTIONS(1062), 1,
      sym_variable,
    STATE(279), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5973] = 4,
    ACTIONS(1064), 1,
      anon_sym_LBRACE,
    ACTIONS(1066), 1,
      sym_variable,
    STATE(179), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5987] = 4,
    ACTIONS(1068), 1,
      anon_sym_LBRACE,
    ACTIONS(1070), 1,
      sym_variable,
    STATE(177), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6001] = 4,
    ACTIONS(1072), 1,
      anon_sym_LBRACE,
    ACTIONS(1074), 1,
      sym_variable,
    STATE(221), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6015] = 4,
    ACTIONS(1012), 1,
      anon_sym_LBRACE,
    ACTIONS(1014), 1,
      sym_variable,
    STATE(285), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6029] = 4,
    ACTIONS(1076), 1,
      anon_sym_LBRACE,
    ACTIONS(1078), 1,
      sym_variable,
    STATE(43), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6043] = 4,
    ACTIONS(1080), 1,
      anon_sym_LBRACE,
    ACTIONS(1082), 1,
      sym_variable,
    STATE(152), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6057] = 4,
    ACTIONS(1084), 1,
      anon_sym_LBRACE,
    ACTIONS(1086), 1,
      sym_variable,
    STATE(231), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6071] = 4,
    ACTIONS(1068), 1,
      anon_sym_LBRACE,
    ACTIONS(1070), 1,
      sym_variable,
    STATE(187), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6085] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [6095] = 3,
    ACTIONS(1088), 1,
      anon_sym_LF,
    ACTIONS(1090), 1,
      anon_sym_EQ,
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
    ACTIONS(1094), 1,
      anon_sym_LF,
    ACTIONS(1096), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6126] = 3,
    ACTIONS(955), 1,
      anon_sym_LF,
    ACTIONS(994), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6137] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_mount_param_param_token1,
    STATE(26), 1,
      sym_mount_param_param,
  [6150] = 3,
    ACTIONS(1100), 1,
      aux_sym_param_token1,
    ACTIONS(1102), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6161] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_image_name_token1,
    ACTIONS(481), 1,
      anon_sym_DOLLAR,
  [6174] = 3,
    ACTIONS(1104), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(1106), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6185] = 3,
    ACTIONS(1108), 1,
      anon_sym_LF,
    ACTIONS(1110), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6196] = 3,
    ACTIONS(1112), 1,
      anon_sym_LF,
    ACTIONS(1114), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6207] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1116), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6216] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1023), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6225] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1118), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6234] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1028), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [6243] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1120), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6252] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1122), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6261] = 3,
    ACTIONS(1124), 1,
      anon_sym_LF,
    ACTIONS(1126), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6272] = 3,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(358), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6283] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1128), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6292] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_mount_param_param_token1,
    STATE(39), 1,
      sym_mount_param_param,
  [6305] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1130), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [6314] = 3,
    ACTIONS(1132), 1,
      anon_sym_LF,
    ACTIONS(1134), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6325] = 3,
    ACTIONS(1136), 1,
      anon_sym_EQ,
    ACTIONS(1138), 1,
      aux_sym_spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6336] = 3,
    ACTIONS(1140), 1,
      anon_sym_LF,
    ACTIONS(1142), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6347] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1144), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6356] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1146), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6365] = 3,
    ACTIONS(1007), 1,
      anon_sym_LF,
    ACTIONS(1148), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6376] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(962), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6385] = 2,
    ACTIONS(1150), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6393] = 2,
    ACTIONS(755), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6401] = 2,
    ACTIONS(1152), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6409] = 2,
    ACTIONS(1154), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6417] = 2,
    ACTIONS(1156), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6425] = 2,
    ACTIONS(1158), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6433] = 2,
    ACTIONS(1130), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6441] = 2,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6449] = 2,
    ACTIONS(1136), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6457] = 2,
    ACTIONS(751), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1162), 1,
      aux_sym_mount_param_param_token1,
  [6475] = 2,
    ACTIONS(1164), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6483] = 2,
    ACTIONS(440), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6491] = 2,
    ACTIONS(1166), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6499] = 2,
    ACTIONS(1168), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6507] = 2,
    ACTIONS(1128), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6515] = 2,
    ACTIONS(1170), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6523] = 2,
    ACTIONS(1172), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6531] = 2,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6539] = 2,
    ACTIONS(1174), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6547] = 2,
    ACTIONS(1176), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6555] = 2,
    ACTIONS(1178), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6563] = 2,
    ACTIONS(1180), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6571] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1182), 1,
      aux_sym_param_token2,
  [6581] = 2,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6589] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1186), 1,
      aux_sym_param_token2,
  [6599] = 2,
    ACTIONS(1188), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6607] = 2,
    ACTIONS(743), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6615] = 2,
    ACTIONS(962), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6623] = 2,
    ACTIONS(1190), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6631] = 2,
    ACTIONS(1192), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6639] = 2,
    ACTIONS(1194), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6647] = 2,
    ACTIONS(1196), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6655] = 2,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6663] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1200), 1,
      aux_sym_param_token2,
  [6673] = 2,
    ACTIONS(884), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6681] = 2,
    ACTIONS(1202), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6689] = 2,
    ACTIONS(1204), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6697] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1206), 1,
      aux_sym_param_token2,
  [6707] = 2,
    ACTIONS(1208), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6715] = 2,
    ACTIONS(1210), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6723] = 2,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6731] = 2,
    ACTIONS(844), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6739] = 2,
    ACTIONS(1214), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6747] = 2,
    ACTIONS(1216), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6755] = 2,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6763] = 2,
    ACTIONS(1118), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6771] = 2,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6779] = 2,
    ACTIONS(1220), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6787] = 2,
    ACTIONS(1222), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6795] = 2,
    ACTIONS(1224), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6803] = 2,
    ACTIONS(1226), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6811] = 2,
    ACTIONS(1228), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6819] = 2,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6827] = 2,
    ACTIONS(1144), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6835] = 2,
    ACTIONS(1232), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6843] = 2,
    ACTIONS(1234), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6851] = 2,
    ACTIONS(1236), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6859] = 2,
    ACTIONS(1238), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6867] = 2,
    ACTIONS(1240), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6875] = 2,
    ACTIONS(1242), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6883] = 2,
    ACTIONS(1244), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6891] = 2,
    ACTIONS(1246), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6899] = 2,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
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
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6923] = 2,
    ACTIONS(1254), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6931] = 2,
    ACTIONS(1256), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6939] = 2,
    ACTIONS(1258), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6947] = 2,
    ACTIONS(1260), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
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
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7051] = 2,
    ACTIONS(1286), 1,
      anon_sym_RBRACE,
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
  [SMALL_STATE(13)] = 568,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 638,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 710,
  [SMALL_STATE(18)] = 746,
  [SMALL_STATE(19)] = 782,
  [SMALL_STATE(20)] = 806,
  [SMALL_STATE(21)] = 840,
  [SMALL_STATE(22)] = 876,
  [SMALL_STATE(23)] = 910,
  [SMALL_STATE(24)] = 941,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 995,
  [SMALL_STATE(27)] = 1018,
  [SMALL_STATE(28)] = 1041,
  [SMALL_STATE(29)] = 1059,
  [SMALL_STATE(30)] = 1089,
  [SMALL_STATE(31)] = 1119,
  [SMALL_STATE(32)] = 1145,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1189,
  [SMALL_STATE(35)] = 1217,
  [SMALL_STATE(36)] = 1243,
  [SMALL_STATE(37)] = 1269,
  [SMALL_STATE(38)] = 1295,
  [SMALL_STATE(39)] = 1313,
  [SMALL_STATE(40)] = 1331,
  [SMALL_STATE(41)] = 1359,
  [SMALL_STATE(42)] = 1387,
  [SMALL_STATE(43)] = 1405,
  [SMALL_STATE(44)] = 1423,
  [SMALL_STATE(45)] = 1441,
  [SMALL_STATE(46)] = 1459,
  [SMALL_STATE(47)] = 1476,
  [SMALL_STATE(48)] = 1503,
  [SMALL_STATE(49)] = 1528,
  [SMALL_STATE(50)] = 1553,
  [SMALL_STATE(51)] = 1578,
  [SMALL_STATE(52)] = 1601,
  [SMALL_STATE(53)] = 1626,
  [SMALL_STATE(54)] = 1643,
  [SMALL_STATE(55)] = 1668,
  [SMALL_STATE(56)] = 1685,
  [SMALL_STATE(57)] = 1702,
  [SMALL_STATE(58)] = 1731,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1781,
  [SMALL_STATE(61)] = 1806,
  [SMALL_STATE(62)] = 1835,
  [SMALL_STATE(63)] = 1860,
  [SMALL_STATE(64)] = 1885,
  [SMALL_STATE(65)] = 1910,
  [SMALL_STATE(66)] = 1937,
  [SMALL_STATE(67)] = 1954,
  [SMALL_STATE(68)] = 1979,
  [SMALL_STATE(69)] = 2004,
  [SMALL_STATE(70)] = 2029,
  [SMALL_STATE(71)] = 2046,
  [SMALL_STATE(72)] = 2071,
  [SMALL_STATE(73)] = 2098,
  [SMALL_STATE(74)] = 2125,
  [SMALL_STATE(75)] = 2152,
  [SMALL_STATE(76)] = 2179,
  [SMALL_STATE(77)] = 2206,
  [SMALL_STATE(78)] = 2230,
  [SMALL_STATE(79)] = 2254,
  [SMALL_STATE(80)] = 2282,
  [SMALL_STATE(81)] = 2308,
  [SMALL_STATE(82)] = 2330,
  [SMALL_STATE(83)] = 2358,
  [SMALL_STATE(84)] = 2386,
  [SMALL_STATE(85)] = 2414,
  [SMALL_STATE(86)] = 2442,
  [SMALL_STATE(87)] = 2466,
  [SMALL_STATE(88)] = 2490,
  [SMALL_STATE(89)] = 2514,
  [SMALL_STATE(90)] = 2538,
  [SMALL_STATE(91)] = 2562,
  [SMALL_STATE(92)] = 2586,
  [SMALL_STATE(93)] = 2608,
  [SMALL_STATE(94)] = 2624,
  [SMALL_STATE(95)] = 2640,
  [SMALL_STATE(96)] = 2656,
  [SMALL_STATE(97)] = 2672,
  [SMALL_STATE(98)] = 2688,
  [SMALL_STATE(99)] = 2714,
  [SMALL_STATE(100)] = 2742,
  [SMALL_STATE(101)] = 2766,
  [SMALL_STATE(102)] = 2794,
  [SMALL_STATE(103)] = 2818,
  [SMALL_STATE(104)] = 2842,
  [SMALL_STATE(105)] = 2866,
  [SMALL_STATE(106)] = 2890,
  [SMALL_STATE(107)] = 2905,
  [SMALL_STATE(108)] = 2926,
  [SMALL_STATE(109)] = 2947,
  [SMALL_STATE(110)] = 2962,
  [SMALL_STATE(111)] = 2977,
  [SMALL_STATE(112)] = 2998,
  [SMALL_STATE(113)] = 3013,
  [SMALL_STATE(114)] = 3034,
  [SMALL_STATE(115)] = 3049,
  [SMALL_STATE(116)] = 3070,
  [SMALL_STATE(117)] = 3091,
  [SMALL_STATE(118)] = 3108,
  [SMALL_STATE(119)] = 3129,
  [SMALL_STATE(120)] = 3148,
  [SMALL_STATE(121)] = 3169,
  [SMALL_STATE(122)] = 3190,
  [SMALL_STATE(123)] = 3211,
  [SMALL_STATE(124)] = 3226,
  [SMALL_STATE(125)] = 3241,
  [SMALL_STATE(126)] = 3262,
  [SMALL_STATE(127)] = 3283,
  [SMALL_STATE(128)] = 3304,
  [SMALL_STATE(129)] = 3325,
  [SMALL_STATE(130)] = 3346,
  [SMALL_STATE(131)] = 3367,
  [SMALL_STATE(132)] = 3388,
  [SMALL_STATE(133)] = 3411,
  [SMALL_STATE(134)] = 3426,
  [SMALL_STATE(135)] = 3441,
  [SMALL_STATE(136)] = 3462,
  [SMALL_STATE(137)] = 3483,
  [SMALL_STATE(138)] = 3504,
  [SMALL_STATE(139)] = 3525,
  [SMALL_STATE(140)] = 3540,
  [SMALL_STATE(141)] = 3555,
  [SMALL_STATE(142)] = 3570,
  [SMALL_STATE(143)] = 3585,
  [SMALL_STATE(144)] = 3600,
  [SMALL_STATE(145)] = 3615,
  [SMALL_STATE(146)] = 3636,
  [SMALL_STATE(147)] = 3655,
  [SMALL_STATE(148)] = 3676,
  [SMALL_STATE(149)] = 3697,
  [SMALL_STATE(150)] = 3718,
  [SMALL_STATE(151)] = 3733,
  [SMALL_STATE(152)] = 3754,
  [SMALL_STATE(153)] = 3769,
  [SMALL_STATE(154)] = 3790,
  [SMALL_STATE(155)] = 3805,
  [SMALL_STATE(156)] = 3820,
  [SMALL_STATE(157)] = 3841,
  [SMALL_STATE(158)] = 3862,
  [SMALL_STATE(159)] = 3883,
  [SMALL_STATE(160)] = 3903,
  [SMALL_STATE(161)] = 3925,
  [SMALL_STATE(162)] = 3947,
  [SMALL_STATE(163)] = 3967,
  [SMALL_STATE(164)] = 3987,
  [SMALL_STATE(165)] = 4005,
  [SMALL_STATE(166)] = 4019,
  [SMALL_STATE(167)] = 4037,
  [SMALL_STATE(168)] = 4051,
  [SMALL_STATE(169)] = 4065,
  [SMALL_STATE(170)] = 4083,
  [SMALL_STATE(171)] = 4103,
  [SMALL_STATE(172)] = 4123,
  [SMALL_STATE(173)] = 4139,
  [SMALL_STATE(174)] = 4157,
  [SMALL_STATE(175)] = 4171,
  [SMALL_STATE(176)] = 4189,
  [SMALL_STATE(177)] = 4203,
  [SMALL_STATE(178)] = 4217,
  [SMALL_STATE(179)] = 4231,
  [SMALL_STATE(180)] = 4245,
  [SMALL_STATE(181)] = 4259,
  [SMALL_STATE(182)] = 4273,
  [SMALL_STATE(183)] = 4287,
  [SMALL_STATE(184)] = 4305,
  [SMALL_STATE(185)] = 4319,
  [SMALL_STATE(186)] = 4333,
  [SMALL_STATE(187)] = 4347,
  [SMALL_STATE(188)] = 4361,
  [SMALL_STATE(189)] = 4379,
  [SMALL_STATE(190)] = 4401,
  [SMALL_STATE(191)] = 4421,
  [SMALL_STATE(192)] = 4441,
  [SMALL_STATE(193)] = 4461,
  [SMALL_STATE(194)] = 4475,
  [SMALL_STATE(195)] = 4488,
  [SMALL_STATE(196)] = 4501,
  [SMALL_STATE(197)] = 4514,
  [SMALL_STATE(198)] = 4527,
  [SMALL_STATE(199)] = 4540,
  [SMALL_STATE(200)] = 4555,
  [SMALL_STATE(201)] = 4568,
  [SMALL_STATE(202)] = 4585,
  [SMALL_STATE(203)] = 4600,
  [SMALL_STATE(204)] = 4617,
  [SMALL_STATE(205)] = 4630,
  [SMALL_STATE(206)] = 4643,
  [SMALL_STATE(207)] = 4656,
  [SMALL_STATE(208)] = 4669,
  [SMALL_STATE(209)] = 4682,
  [SMALL_STATE(210)] = 4693,
  [SMALL_STATE(211)] = 4704,
  [SMALL_STATE(212)] = 4715,
  [SMALL_STATE(213)] = 4726,
  [SMALL_STATE(214)] = 4737,
  [SMALL_STATE(215)] = 4750,
  [SMALL_STATE(216)] = 4763,
  [SMALL_STATE(217)] = 4780,
  [SMALL_STATE(218)] = 4791,
  [SMALL_STATE(219)] = 4804,
  [SMALL_STATE(220)] = 4815,
  [SMALL_STATE(221)] = 4828,
  [SMALL_STATE(222)] = 4841,
  [SMALL_STATE(223)] = 4854,
  [SMALL_STATE(224)] = 4869,
  [SMALL_STATE(225)] = 4882,
  [SMALL_STATE(226)] = 4899,
  [SMALL_STATE(227)] = 4914,
  [SMALL_STATE(228)] = 4929,
  [SMALL_STATE(229)] = 4946,
  [SMALL_STATE(230)] = 4959,
  [SMALL_STATE(231)] = 4972,
  [SMALL_STATE(232)] = 4985,
  [SMALL_STATE(233)] = 4998,
  [SMALL_STATE(234)] = 5015,
  [SMALL_STATE(235)] = 5030,
  [SMALL_STATE(236)] = 5045,
  [SMALL_STATE(237)] = 5060,
  [SMALL_STATE(238)] = 5077,
  [SMALL_STATE(239)] = 5090,
  [SMALL_STATE(240)] = 5103,
  [SMALL_STATE(241)] = 5118,
  [SMALL_STATE(242)] = 5133,
  [SMALL_STATE(243)] = 5148,
  [SMALL_STATE(244)] = 5163,
  [SMALL_STATE(245)] = 5178,
  [SMALL_STATE(246)] = 5195,
  [SMALL_STATE(247)] = 5209,
  [SMALL_STATE(248)] = 5223,
  [SMALL_STATE(249)] = 5235,
  [SMALL_STATE(250)] = 5249,
  [SMALL_STATE(251)] = 5261,
  [SMALL_STATE(252)] = 5275,
  [SMALL_STATE(253)] = 5289,
  [SMALL_STATE(254)] = 5303,
  [SMALL_STATE(255)] = 5317,
  [SMALL_STATE(256)] = 5331,
  [SMALL_STATE(257)] = 5343,
  [SMALL_STATE(258)] = 5357,
  [SMALL_STATE(259)] = 5369,
  [SMALL_STATE(260)] = 5381,
  [SMALL_STATE(261)] = 5393,
  [SMALL_STATE(262)] = 5405,
  [SMALL_STATE(263)] = 5417,
  [SMALL_STATE(264)] = 5429,
  [SMALL_STATE(265)] = 5441,
  [SMALL_STATE(266)] = 5453,
  [SMALL_STATE(267)] = 5465,
  [SMALL_STATE(268)] = 5477,
  [SMALL_STATE(269)] = 5489,
  [SMALL_STATE(270)] = 5503,
  [SMALL_STATE(271)] = 5517,
  [SMALL_STATE(272)] = 5531,
  [SMALL_STATE(273)] = 5541,
  [SMALL_STATE(274)] = 5553,
  [SMALL_STATE(275)] = 5565,
  [SMALL_STATE(276)] = 5577,
  [SMALL_STATE(277)] = 5589,
  [SMALL_STATE(278)] = 5601,
  [SMALL_STATE(279)] = 5611,
  [SMALL_STATE(280)] = 5621,
  [SMALL_STATE(281)] = 5631,
  [SMALL_STATE(282)] = 5641,
  [SMALL_STATE(283)] = 5655,
  [SMALL_STATE(284)] = 5665,
  [SMALL_STATE(285)] = 5675,
  [SMALL_STATE(286)] = 5685,
  [SMALL_STATE(287)] = 5695,
  [SMALL_STATE(288)] = 5705,
  [SMALL_STATE(289)] = 5719,
  [SMALL_STATE(290)] = 5733,
  [SMALL_STATE(291)] = 5747,
  [SMALL_STATE(292)] = 5757,
  [SMALL_STATE(293)] = 5767,
  [SMALL_STATE(294)] = 5779,
  [SMALL_STATE(295)] = 5793,
  [SMALL_STATE(296)] = 5807,
  [SMALL_STATE(297)] = 5821,
  [SMALL_STATE(298)] = 5835,
  [SMALL_STATE(299)] = 5849,
  [SMALL_STATE(300)] = 5861,
  [SMALL_STATE(301)] = 5875,
  [SMALL_STATE(302)] = 5889,
  [SMALL_STATE(303)] = 5903,
  [SMALL_STATE(304)] = 5917,
  [SMALL_STATE(305)] = 5931,
  [SMALL_STATE(306)] = 5945,
  [SMALL_STATE(307)] = 5959,
  [SMALL_STATE(308)] = 5973,
  [SMALL_STATE(309)] = 5987,
  [SMALL_STATE(310)] = 6001,
  [SMALL_STATE(311)] = 6015,
  [SMALL_STATE(312)] = 6029,
  [SMALL_STATE(313)] = 6043,
  [SMALL_STATE(314)] = 6057,
  [SMALL_STATE(315)] = 6071,
  [SMALL_STATE(316)] = 6085,
  [SMALL_STATE(317)] = 6095,
  [SMALL_STATE(318)] = 6106,
  [SMALL_STATE(319)] = 6115,
  [SMALL_STATE(320)] = 6126,
  [SMALL_STATE(321)] = 6137,
  [SMALL_STATE(322)] = 6150,
  [SMALL_STATE(323)] = 6161,
  [SMALL_STATE(324)] = 6174,
  [SMALL_STATE(325)] = 6185,
  [SMALL_STATE(326)] = 6196,
  [SMALL_STATE(327)] = 6207,
  [SMALL_STATE(328)] = 6216,
  [SMALL_STATE(329)] = 6225,
  [SMALL_STATE(330)] = 6234,
  [SMALL_STATE(331)] = 6243,
  [SMALL_STATE(332)] = 6252,
  [SMALL_STATE(333)] = 6261,
  [SMALL_STATE(334)] = 6272,
  [SMALL_STATE(335)] = 6283,
  [SMALL_STATE(336)] = 6292,
  [SMALL_STATE(337)] = 6305,
  [SMALL_STATE(338)] = 6314,
  [SMALL_STATE(339)] = 6325,
  [SMALL_STATE(340)] = 6336,
  [SMALL_STATE(341)] = 6347,
  [SMALL_STATE(342)] = 6356,
  [SMALL_STATE(343)] = 6365,
  [SMALL_STATE(344)] = 6376,
  [SMALL_STATE(345)] = 6385,
  [SMALL_STATE(346)] = 6393,
  [SMALL_STATE(347)] = 6401,
  [SMALL_STATE(348)] = 6409,
  [SMALL_STATE(349)] = 6417,
  [SMALL_STATE(350)] = 6425,
  [SMALL_STATE(351)] = 6433,
  [SMALL_STATE(352)] = 6441,
  [SMALL_STATE(353)] = 6449,
  [SMALL_STATE(354)] = 6457,
  [SMALL_STATE(355)] = 6465,
  [SMALL_STATE(356)] = 6475,
  [SMALL_STATE(357)] = 6483,
  [SMALL_STATE(358)] = 6491,
  [SMALL_STATE(359)] = 6499,
  [SMALL_STATE(360)] = 6507,
  [SMALL_STATE(361)] = 6515,
  [SMALL_STATE(362)] = 6523,
  [SMALL_STATE(363)] = 6531,
  [SMALL_STATE(364)] = 6539,
  [SMALL_STATE(365)] = 6547,
  [SMALL_STATE(366)] = 6555,
  [SMALL_STATE(367)] = 6563,
  [SMALL_STATE(368)] = 6571,
  [SMALL_STATE(369)] = 6581,
  [SMALL_STATE(370)] = 6589,
  [SMALL_STATE(371)] = 6599,
  [SMALL_STATE(372)] = 6607,
  [SMALL_STATE(373)] = 6615,
  [SMALL_STATE(374)] = 6623,
  [SMALL_STATE(375)] = 6631,
  [SMALL_STATE(376)] = 6639,
  [SMALL_STATE(377)] = 6647,
  [SMALL_STATE(378)] = 6655,
  [SMALL_STATE(379)] = 6663,
  [SMALL_STATE(380)] = 6673,
  [SMALL_STATE(381)] = 6681,
  [SMALL_STATE(382)] = 6689,
  [SMALL_STATE(383)] = 6697,
  [SMALL_STATE(384)] = 6707,
  [SMALL_STATE(385)] = 6715,
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
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(403),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 37),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, 0, 10),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, 0, 66),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, 0, 66),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, 0, 67),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, 0, 67),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 53),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 53),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 54),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, 0, 54),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, 0, 68),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, 0, 68),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 69),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 69),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, 0, 44),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, 0, 44),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, 0, 62),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, 0, 62),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 34),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 34),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, 0, 19),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 7),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 7),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 6),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 6),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 15),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 15),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 16),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 16),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 15),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 15),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 16),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 16),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, 0, 63),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 63),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, 0, 19),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, 0, 48),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, 0, 48),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, 0, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(126),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(127),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(298),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(357),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 15),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 15),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 4),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, 0, 50),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, 0, 50),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, 0, 12),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 15),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 15),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 55),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 55),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 56),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 56),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 45),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 11),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 11),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_param, 2, 0, 39),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_param, 2, 0, 39),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, 0, 31),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, 0, 31),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 14),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, 0, 25),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, 0, 25),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 45),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, 0, 47),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, 0, 47),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [836] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, 0, 40),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, 0, 35),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, 0, 35),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, 0, 41),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, 0, 41),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, 0, 40),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, 0, 38),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, 0, 38),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, 0, 11),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, 0, 11),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, 0, 27),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 41),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [896] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, 0, 36),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, 0, 36),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, 0, 42),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 40),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, 0, 49),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, 0, 49),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 41),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 40),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 8),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, 0, 8),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(251),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 8),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 32),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 32),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1, 0, 52),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1, 0, 52),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 57),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 57),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, 0, 18),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, 0, 64),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, 0, 43),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, 0, 18),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1, 0, 0),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 22),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, 0, 51),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, 0, 51),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 33),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 33),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 2),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3, 0, 0),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, 0, 2),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, 0, 13),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 23),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, 0, 20),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, 0, 21),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, 0, 26),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, 0, 28),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, 0, 65),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, 0, 18),
  [1176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, 0, 9),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 46),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, 0, 58),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, 0, 29),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 30),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, 0, 24),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 27),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, 0, 17),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, 0, 59),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 60),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 61),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
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
