// Generated code for Python source for module 'silver_bullet.symcrypt'
// created by Nuitka version 0.5.13.2

// This code is in part copyright 2015 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_silver_bullet$symcrypt is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_silver_bullet$symcrypt;
PyDictObject *moduledict_silver_bullet$symcrypt;

// The module constants used
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_sym_encrypt;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_391c40cf46d98e625d86cdc444242aff_tuple;
static PyObject *const_str_plain_map;
static PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_trng;
static PyObject *const_str_plain_sha1;
static PyObject *const_str_plain_str;
static PyObject *const_str_plain_pad_gen;
static PyObject *const_str_plain_ct;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_hexdigest;
extern PyObject *const_str_digest_3110a82eea8f688e0760b7b8ad436ed2;
extern PyObject *const_dict_empty;
static PyObject *const_int_pos_256;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_hashlib;
extern PyObject *const_str_digest_c6bd178b372b0ddd17fff48819badc6a;
static PyObject *const_str_plain_seed;
static PyObject *const_str_plain_bytes;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_value_tuple;
static PyObject *const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple;
static PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_deciphered;
static PyObject *const_str_plain_op_decider;
static PyObject *const_str_plain_value;
static PyObject *const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple;
static PyObject *const_str_plain_lp;
static PyObject *const_int_pos_3;
static PyObject *const_str_plain_randrange;
extern PyObject *const_str_plain_silver_bullet;
extern PyObject *const_str_plain_cipher_text;
static PyObject *const_str_plain_user_input;
static PyObject *const_str_plain_symcrypt;
static PyObject *const_str_plain_contain_ascii;
static PyObject *const_str_plain_random;
static PyObject *const_str_digest_b0ef7ec073310b013d83784af2061d98;
static PyObject *const_str_plain_decompress;
static PyObject *const_tuple_str_plain_sha1_tuple;
static PyObject *const_str_plain_pt;
static PyObject *const_str_plain_byted;
extern PyObject *const_str_digest_7a909aac4e038640aef15c8f252d17be;
static PyObject *const_str_plain_passphrase;
extern PyObject *const_tuple_str_plain_trng_tuple;
static PyObject *const_str_plain_locked;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_ascii_value;
static PyObject *const_str_space;
static PyObject *const_str_plain_compressed;
static PyObject *const_str_plain_compress;
static PyObject *const_str_plain_counter;
static PyObject *const_str_plain_unlocked;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_append;
extern PyObject *const_str_plain_locked_pad;
static PyObject *const_str_plain_actual_seed;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_ciphered;
static PyObject *const_str_plain_ui_listed;
extern PyObject *const_str_plain___loader__;
static PyObject *const_int_pos_10;
static PyObject *const_str_plain_zlib;
static PyObject *const_str_plain_pad;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_sym_decrypt;
static PyObject *const_str_plain_element;
static PyObject *const_str_plain_decompressed;
static PyObject *module_filename_obj;

static void _initModuleConstants( void )
{
    const_str_plain_sym_encrypt = UNSTREAM_STRING( &constant_bin[ 4682 ], 11, 1 );
    const_tuple_391c40cf46d98e625d86cdc444242aff_tuple = PyTuple_New( 5 );
    const_str_plain_ui_listed = UNSTREAM_STRING( &constant_bin[ 2636 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_391c40cf46d98e625d86cdc444242aff_tuple, 0, const_str_plain_ui_listed ); Py_INCREF( const_str_plain_ui_listed );
    const_str_plain_pad = UNSTREAM_STRING( &constant_bin[ 542 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_391c40cf46d98e625d86cdc444242aff_tuple, 1, const_str_plain_pad ); Py_INCREF( const_str_plain_pad );
    const_str_plain_counter = UNSTREAM_STRING( &constant_bin[ 2726 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_391c40cf46d98e625d86cdc444242aff_tuple, 2, const_str_plain_counter ); Py_INCREF( const_str_plain_counter );
    const_str_plain_op_decider = UNSTREAM_STRING( &constant_bin[ 3321 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_391c40cf46d98e625d86cdc444242aff_tuple, 3, const_str_plain_op_decider ); Py_INCREF( const_str_plain_op_decider );
    const_str_plain_actual_seed = UNSTREAM_STRING( &constant_bin[ 3377 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_391c40cf46d98e625d86cdc444242aff_tuple, 4, const_str_plain_actual_seed ); Py_INCREF( const_str_plain_actual_seed );
    const_str_plain_map = UNSTREAM_STRING( &constant_bin[ 4693 ], 3, 1 );
    const_str_plain_decode = UNSTREAM_STRING( &constant_bin[ 4696 ], 6, 1 );
    const_str_plain_sha1 = UNSTREAM_STRING( &constant_bin[ 3285 ], 4, 1 );
    const_str_plain_str = UNSTREAM_STRING( &constant_bin[ 4702 ], 3, 1 );
    const_str_plain_pad_gen = UNSTREAM_STRING( &constant_bin[ 2597 ], 7, 1 );
    const_str_plain_ct = UNSTREAM_STRING( &constant_bin[ 2779 ], 2, 1 );
    const_str_plain_hexdigest = UNSTREAM_STRING( &constant_bin[ 4705 ], 9, 1 );
    const_int_pos_256 = PyLong_FromUnsignedLong( 256ul );
    const_str_plain_hashlib = UNSTREAM_STRING( &constant_bin[ 4714 ], 7, 1 );
    const_str_plain_seed = UNSTREAM_STRING( &constant_bin[ 3384 ], 4, 1 );
    const_str_plain_bytes = UNSTREAM_STRING( &constant_bin[ 4721 ], 5, 1 );
    const_tuple_str_plain_value_tuple = PyTuple_New( 1 );
    const_str_plain_value = UNSTREAM_STRING( &constant_bin[ 2954 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 0, const_str_plain_cipher_text ); Py_INCREF( const_str_plain_cipher_text );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 1, const_str_plain_locked_pad ); Py_INCREF( const_str_plain_locked_pad );
    const_str_plain_passphrase = UNSTREAM_STRING( &constant_bin[ 4726 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 2, const_str_plain_passphrase ); Py_INCREF( const_str_plain_passphrase );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 3, const_str_plain_ct ); Py_INCREF( const_str_plain_ct );
    const_str_plain_lp = UNSTREAM_STRING( &constant_bin[ 2991 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 4, const_str_plain_lp ); Py_INCREF( const_str_plain_lp );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 5, const_str_plain_pad ); Py_INCREF( const_str_plain_pad );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 6, const_str_plain_counter ); Py_INCREF( const_str_plain_counter );
    const_str_plain_element = UNSTREAM_STRING( &constant_bin[ 4736 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 7, const_str_plain_element ); Py_INCREF( const_str_plain_element );
    const_str_plain_unlocked = UNSTREAM_STRING( &constant_bin[ 3091 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 8, const_str_plain_unlocked ); Py_INCREF( const_str_plain_unlocked );
    const_str_plain_pt = UNSTREAM_STRING( &constant_bin[ 409 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 9, const_str_plain_pt ); Py_INCREF( const_str_plain_pt );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 10, const_str_plain_deciphered ); Py_INCREF( const_str_plain_deciphered );
    const_str_plain_byted = UNSTREAM_STRING( &constant_bin[ 3193 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 11, const_str_plain_byted ); Py_INCREF( const_str_plain_byted );
    const_str_plain_decompressed = UNSTREAM_STRING( &constant_bin[ 4743 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 12, const_str_plain_decompressed ); Py_INCREF( const_str_plain_decompressed );
    const_str_plain_encode = UNSTREAM_STRING( &constant_bin[ 4755 ], 6, 1 );
    const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple = PyTuple_New( 13 );
    const_str_plain_user_input = UNSTREAM_STRING( &constant_bin[ 4761 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 0, const_str_plain_user_input ); Py_INCREF( const_str_plain_user_input );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 1, const_str_plain_passphrase ); Py_INCREF( const_str_plain_passphrase );
    const_str_plain_compressed = UNSTREAM_STRING( &constant_bin[ 4745 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 2, const_str_plain_compressed ); Py_INCREF( const_str_plain_compressed );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 3, const_str_plain_ui_listed ); Py_INCREF( const_str_plain_ui_listed );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 4, const_str_plain_pad ); Py_INCREF( const_str_plain_pad );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 5, const_str_plain_ct ); Py_INCREF( const_str_plain_ct );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 6, const_str_plain_counter ); Py_INCREF( const_str_plain_counter );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 7, const_str_plain_element ); Py_INCREF( const_str_plain_element );
    const_str_plain_ciphered = UNSTREAM_STRING( &constant_bin[ 642 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 8, const_str_plain_ciphered ); Py_INCREF( const_str_plain_ciphered );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 9, const_str_plain_lp ); Py_INCREF( const_str_plain_lp );
    const_str_plain_locked = UNSTREAM_STRING( &constant_bin[ 535 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 10, const_str_plain_locked ); Py_INCREF( const_str_plain_locked );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 11, const_str_plain_cipher_text ); Py_INCREF( const_str_plain_cipher_text );
    PyTuple_SET_ITEM( const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 12, const_str_plain_locked_pad ); Py_INCREF( const_str_plain_locked_pad );
    const_int_pos_3 = PyLong_FromUnsignedLong( 3ul );
    const_str_plain_randrange = UNSTREAM_STRING( &constant_bin[ 4771 ], 9, 1 );
    const_str_plain_symcrypt = UNSTREAM_STRING( &constant_bin[ 4780 ], 8, 1 );
    const_str_plain_contain_ascii = UNSTREAM_STRING( &constant_bin[ 2681 ], 13, 1 );
    const_str_plain_random = UNSTREAM_STRING( &constant_bin[ 2871 ], 6, 1 );
    const_str_digest_b0ef7ec073310b013d83784af2061d98 = UNSTREAM_STRING( &constant_bin[ 4788 ], 55, 0 );
    const_str_plain_decompress = UNSTREAM_STRING( &constant_bin[ 4743 ], 10, 1 );
    const_tuple_str_plain_sha1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sha1_tuple, 0, const_str_plain_sha1 ); Py_INCREF( const_str_plain_sha1 );
    const_str_plain_ascii_value = UNSTREAM_STRING( &constant_bin[ 2948 ], 11, 1 );
    const_str_space = UNSTREAM_STRING( &constant_bin[ 4 ], 1, 0 );
    const_str_plain_compress = UNSTREAM_STRING( &constant_bin[ 4745 ], 8, 1 );
    const_str_plain_append = UNSTREAM_STRING( &constant_bin[ 4843 ], 6, 1 );
    const_int_pos_10 = PyLong_FromUnsignedLong( 10ul );
    const_str_plain_zlib = UNSTREAM_STRING( &constant_bin[ 2571 ], 4, 1 );
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_silver_bullet$symcrypt( void )
{

}
#endif

// The module code objects.
static PyCodeObject *codeobj_49f11a29d0850af59c249d68d95451a9;
static PyCodeObject *codeobj_55185c47e9c8d04ca40d85270ce1b9b0;
static PyCodeObject *codeobj_b6f65b4524b4eaa08b80e43c28d5c425;
static PyCodeObject *codeobj_68e41b73dfa6944cc106902ffd5438d3;
static PyCodeObject *codeobj_bd09c11c14815e5dc6ddfe690f081427;

static void _initModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b0ef7ec073310b013d83784af2061d98 );
    codeobj_49f11a29d0850af59c249d68d95451a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_contain_ascii, 76, const_tuple_str_plain_value_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_55185c47e9c8d04ca40d85270ce1b9b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pad_gen, 86, const_tuple_391c40cf46d98e625d86cdc444242aff_tuple, 1, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b6f65b4524b4eaa08b80e43c28d5c425 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sym_decrypt, 46, const_tuple_03aa20ff3cc7504c7032853c4da011f2_tuple, 3, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_68e41b73dfa6944cc106902ffd5438d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sym_encrypt, 19, const_tuple_b1ede0540ef93f4682dbe1203a9f380c_tuple, 2, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_bd09c11c14815e5dc6ddfe690f081427 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_symcrypt, 0, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 );


static PyObject *MAKE_FUNCTION_function_1_sym_encrypt_of_silver_bullet$symcrypt(  );


static PyObject *MAKE_FUNCTION_function_2_sym_decrypt_of_silver_bullet$symcrypt(  );


static PyObject *MAKE_FUNCTION_function_3_contain_ascii_of_silver_bullet$symcrypt(  );


static PyObject *MAKE_FUNCTION_function_4_pad_gen_of_silver_bullet$symcrypt(  );


// The module function definitions.
static PyObject *impl_function_1_sym_encrypt_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject *_python_par_user_input, PyObject *_python_par_passphrase )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_user_input = _python_par_user_input;
    PyObject *par_passphrase = _python_par_passphrase;
    PyObject *var_compressed = NULL;
    PyObject *var_ui_listed = NULL;
    PyObject *var_pad = NULL;
    PyObject *var_ct = NULL;
    PyObject *var_counter = NULL;
    PyObject *var_element = NULL;
    PyObject *var_ciphered = NULL;
    PyObject *var_lp = NULL;
    PyObject *var_locked = NULL;
    PyObject *var_cipher_text = NULL;
    PyObject *var_locked_pad = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_68e41b73dfa6944cc106902ffd5438d3, module_silver_bullet$symcrypt );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2565 ], 26, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compress );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_user_input;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 20;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 20;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    assert( var_compressed == NULL );
    var_compressed = tmp_assign_source_1;

    tmp_list_arg_1 = var_compressed;

    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    assert( var_ui_listed == NULL );
    var_ui_listed = tmp_assign_source_2;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_pad_gen );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pad_gen );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2591 ], 29, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_ui_listed;

    frame_function->f_lineno = 22;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    assert( var_pad == NULL );
    var_pad = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( var_ct == NULL );
    var_ct = tmp_assign_source_4;

    tmp_assign_source_5 = const_int_0;
    assert( var_counter == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_counter = tmp_assign_source_5;

    tmp_iter_arg_1 = var_ui_listed;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2620 ], 55, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 27;
            goto try_finally_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_element;
        var_element = tmp_assign_source_8;
        Py_INCREF( var_element );
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_contain_ascii );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contain_ascii );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2675 ], 35, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 28;
        goto try_finally_handler_2;
    }

    tmp_left_name_1 = var_element;

    tmp_subscribed_name_1 = var_pad;

    tmp_subscript_name_1 = var_counter;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2710 ], 53, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 28;
        goto try_finally_handler_2;
    }

    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 28;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 28;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 28;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 28;
        goto try_finally_handler_2;
    }
    {
        PyObject *old = var_ciphered;
        var_ciphered = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = var_ct;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2763 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 29;
        goto try_finally_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 29;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_4 = var_ciphered;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2811 ], 54, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 29;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 29;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, tmp_args_element_name_4 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 29;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_2 = var_counter;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2710 ], 53, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 30;
        goto try_finally_handler_2;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_10 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 30;
        goto try_finally_handler_2;
    }
    var_counter = tmp_assign_source_10;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 27;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_seed );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_passphrase;

    frame_function->f_lineno = 32;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_5 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_11 = PyList_New( 0 );
    assert( var_lp == NULL );
    var_lp = tmp_assign_source_11;

    tmp_assign_source_12 = const_int_0;
    {
        PyObject *old = var_counter;
        var_counter = tmp_assign_source_12;
        Py_INCREF( var_counter );
        Py_XDECREF( old );
    }

    tmp_iter_arg_2 = var_pad;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2893 ], 49, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_13;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 36;
            goto try_finally_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_element;
        var_element = tmp_assign_source_15;
        Py_INCREF( var_element );
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_element;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 37;
        goto try_finally_handler_3;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_randrange );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_3;
    }
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 37;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 37;
    tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_6 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_3;
    }
    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_3;
    }
    {
        PyObject *old = var_locked;
        var_locked = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_source_name_6 = var_lp;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2975 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 38;
        goto try_finally_handler_3;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 38;
        goto try_finally_handler_3;
    }
    tmp_args_element_name_7 = var_locked;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3023 ], 52, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 38;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 38;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, tmp_args_element_name_7 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 38;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_4 = var_counter;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2710 ], 53, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 39;
        goto try_finally_handler_3;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_17 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 39;
        goto try_finally_handler_3;
    }
    var_counter = tmp_assign_source_17;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 36;
        goto try_finally_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_source_name_7 = const_str_space;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = var_ct;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2763 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 41;
    tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, tmp_args_element_name_9, tmp_args_element_name_10 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 41;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, tmp_args_element_name_8 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( var_cipher_text == NULL );
    var_cipher_text = tmp_assign_source_18;

    tmp_source_name_8 = const_str_space;
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = var_lp;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2975 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 42;
    tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, tmp_args_element_name_12, tmp_args_element_name_13 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 42;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, tmp_args_element_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    assert( var_locked_pad == NULL );
    var_locked_pad = tmp_assign_source_19;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_cipher_text;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 462 ], 57, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_locked_pad;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_finally_handler_start_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_function );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ( var_compressed != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_compressed,
            var_compressed
        );
        assert( tmp_res != -1 );

    }
    if ( var_ui_listed != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ui_listed,
            var_ui_listed
        );
        assert( tmp_res != -1 );

    }
    if ( var_pad != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pad,
            var_pad
        );
        assert( tmp_res != -1 );

    }
    if ( var_ct != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ct,
            var_ct
        );
        assert( tmp_res != -1 );

    }
    if ( var_counter != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_counter,
            var_counter
        );
        assert( tmp_res != -1 );

    }
    if ( var_element != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_element,
            var_element
        );
        assert( tmp_res != -1 );

    }
    if ( var_ciphered != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ciphered,
            var_ciphered
        );
        assert( tmp_res != -1 );

    }
    if ( var_lp != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lp,
            var_lp
        );
        assert( tmp_res != -1 );

    }
    if ( var_locked != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_locked,
            var_locked
        );
        assert( tmp_res != -1 );

    }
    if ( var_cipher_text != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cipher_text,
            var_cipher_text
        );
        assert( tmp_res != -1 );

    }
    if ( var_locked_pad != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_locked_pad,
            var_locked_pad
        );
        assert( tmp_res != -1 );

    }
    if ( par_user_input != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_user_input,
            par_user_input
        );
        assert( tmp_res != -1 );

    }
    if ( par_passphrase != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_passphrase,
            par_passphrase
        );
        assert( tmp_res != -1 );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_finally_handler_1;
    frame_no_exception_1:;

    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_user_input );
    par_user_input = NULL;

    Py_XDECREF( par_passphrase );
    par_passphrase = NULL;

    Py_XDECREF( var_compressed );
    var_compressed = NULL;

    Py_XDECREF( var_ui_listed );
    var_ui_listed = NULL;

    Py_XDECREF( var_pad );
    var_pad = NULL;

    Py_XDECREF( var_ct );
    var_ct = NULL;

    Py_XDECREF( var_counter );
    var_counter = NULL;

    Py_XDECREF( var_element );
    var_element = NULL;

    Py_XDECREF( var_ciphered );
    var_ciphered = NULL;

    Py_XDECREF( var_lp );
    var_lp = NULL;

    Py_XDECREF( var_locked );
    var_locked = NULL;

    Py_XDECREF( var_cipher_text );
    var_cipher_text = NULL;

    Py_XDECREF( var_locked_pad );
    var_locked_pad = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_3;
    finally_end_3:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_sym_encrypt_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_1_sym_encrypt_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_user_input = NULL;
    PyObject *_python_par_passphrase = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "sym_encrypt() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_user_input == key )
            {
                assert( _python_par_user_input == NULL );
                _python_par_user_input = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_passphrase == key )
            {
                assert( _python_par_passphrase == NULL );
                _python_par_passphrase = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_user_input, key ) == 1 )
            {
                assert( _python_par_user_input == NULL );
                _python_par_user_input = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_passphrase, key ) == 1 )
            {
                assert( _python_par_passphrase == NULL );
                _python_par_passphrase = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "sym_encrypt() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_user_input != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_user_input = args[ 0 ];
        Py_INCREF( _python_par_user_input );
    }
    else if ( _python_par_user_input == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_user_input = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 );
            Py_INCREF( _python_par_user_input );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_passphrase != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_passphrase = args[ 1 ];
        Py_INCREF( _python_par_passphrase );
    }
    else if ( _python_par_passphrase == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_passphrase = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 );
            Py_INCREF( _python_par_passphrase );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_user_input == NULL || _python_par_passphrase == NULL ))
    {
        PyObject *values[] = { _python_par_user_input, _python_par_passphrase };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }



    return impl_function_1_sym_encrypt_of_silver_bullet$symcrypt( self, _python_par_user_input, _python_par_passphrase );

error_exit:;

    Py_XDECREF( _python_par_user_input );
    Py_XDECREF( _python_par_passphrase );

    return NULL;
}

static PyObject *dparse_function_1_sym_encrypt_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_sym_encrypt_of_silver_bullet$symcrypt( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_sym_encrypt_of_silver_bullet$symcrypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_sym_decrypt_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject *_python_par_cipher_text, PyObject *_python_par_locked_pad, PyObject *_python_par_passphrase )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cipher_text = _python_par_cipher_text;
    PyObject *par_locked_pad = _python_par_locked_pad;
    PyObject *par_passphrase = _python_par_passphrase;
    PyObject *var_ct = NULL;
    PyObject *var_lp = NULL;
    PyObject *var_pad = NULL;
    PyObject *var_counter = NULL;
    PyObject *var_element = NULL;
    PyObject *var_unlocked = NULL;
    PyObject *var_pt = NULL;
    PyObject *var_deciphered = NULL;
    PyObject *var_byted = NULL;
    PyObject *var_decompressed = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b6f65b4524b4eaa08b80e43c28d5c425, module_silver_bullet$symcrypt );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_cipher_text;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_space;
    frame_function->f_lineno = 47;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    assert( var_ct == NULL );
    var_ct = tmp_assign_source_1;

    tmp_source_name_2 = par_locked_pad;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_space;
    frame_function->f_lineno = 48;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    assert( var_lp == NULL );
    var_lp = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_seed );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_passphrase;

    frame_function->f_lineno = 50;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_pad == NULL );
    var_pad = tmp_assign_source_3;

    tmp_assign_source_4 = const_int_0;
    assert( var_counter == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_counter = tmp_assign_source_4;

    tmp_iter_arg_1 = var_lp;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2975 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 54;
            goto try_finally_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_element;
        var_element = tmp_assign_source_7;
        Py_INCREF( var_element );
        Py_XDECREF( old );
    }

    tmp_int_arg_1 = var_element;

    tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 55;
        goto try_finally_handler_2;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 55;
        goto try_finally_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_randrange );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        frame_function->f_lineno = 55;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 55;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 55;
    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        frame_function->f_lineno = 55;
        goto try_finally_handler_2;
    }
    tmp_assign_source_8 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 55;
        goto try_finally_handler_2;
    }
    {
        PyObject *old = var_unlocked;
        var_unlocked = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_source_name_5 = var_pad;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2893 ], 49, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 56;
        goto try_finally_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 56;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_3 = var_unlocked;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3075 ], 54, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 56;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 56;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 56;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_2 = var_counter;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2710 ], 53, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 57;
        goto try_finally_handler_2;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_9 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 57;
        goto try_finally_handler_2;
    }
    var_counter = tmp_assign_source_9;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_10 = PyList_New( 0 );
    assert( var_pt == NULL );
    var_pt = tmp_assign_source_10;

    tmp_assign_source_11 = const_int_0;
    {
        PyObject *old = var_counter;
        var_counter = tmp_assign_source_11;
        Py_INCREF( var_counter );
        Py_XDECREF( old );
    }

    tmp_iter_arg_2 = var_ct;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2763 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_12;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 62;
            goto try_finally_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_element;
        var_element = tmp_assign_source_14;
        Py_INCREF( var_element );
        Py_XDECREF( old );
    }

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_contain_ascii );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contain_ascii );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2675 ], 35, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
    }

    tmp_int_arg_2 = var_element;

    tmp_left_name_3 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
    }
    tmp_subscribed_name_1 = var_pad;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2893 ], 49, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
    }

    tmp_subscript_name_1 = var_counter;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2710 ], 53, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
    }

    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
    }
    tmp_args_element_name_4 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 63;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
    }
    {
        PyObject *old = var_deciphered;
        var_deciphered = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_source_name_6 = var_pt;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3129 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }
    tmp_args_element_name_5 = var_deciphered;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 624 ], 56, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 64;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_5 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_4 = var_counter;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2710 ], 53, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 65;
        goto try_finally_handler_3;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_16 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 65;
        goto try_finally_handler_3;
    }
    var_counter = tmp_assign_source_16;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_bytes );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_pt;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3129 ], 48, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 67;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, tmp_args_element_name_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    assert( var_byted == NULL );
    var_byted = tmp_assign_source_17;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2565 ], 26, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_decompress );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_byted;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3177 ], 51, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 68;
    tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, tmp_args_element_name_7 );
    Py_DECREF( tmp_called_name_10 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_decode );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 68;
    tmp_assign_source_18 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    assert( var_decompressed == NULL );
    var_decompressed = tmp_assign_source_18;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_function );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ( var_ct != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ct,
            var_ct
        );
        assert( tmp_res != -1 );

    }
    if ( var_lp != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lp,
            var_lp
        );
        assert( tmp_res != -1 );

    }
    if ( var_pad != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pad,
            var_pad
        );
        assert( tmp_res != -1 );

    }
    if ( var_counter != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_counter,
            var_counter
        );
        assert( tmp_res != -1 );

    }
    if ( var_element != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_element,
            var_element
        );
        assert( tmp_res != -1 );

    }
    if ( var_unlocked != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_unlocked,
            var_unlocked
        );
        assert( tmp_res != -1 );

    }
    if ( var_pt != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pt,
            var_pt
        );
        assert( tmp_res != -1 );

    }
    if ( var_deciphered != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_deciphered,
            var_deciphered
        );
        assert( tmp_res != -1 );

    }
    if ( var_byted != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_byted,
            var_byted
        );
        assert( tmp_res != -1 );

    }
    if ( var_decompressed != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_decompressed,
            var_decompressed
        );
        assert( tmp_res != -1 );

    }
    if ( par_cipher_text != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cipher_text,
            par_cipher_text
        );
        assert( tmp_res != -1 );

    }
    if ( par_locked_pad != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_locked_pad,
            par_locked_pad
        );
        assert( tmp_res != -1 );

    }
    if ( par_passphrase != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_passphrase,
            par_passphrase
        );
        assert( tmp_res != -1 );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_finally_handler_1;
    frame_no_exception_1:;

    tmp_return_value = var_decompressed;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_cipher_text );
    par_cipher_text = NULL;

    Py_XDECREF( par_locked_pad );
    par_locked_pad = NULL;

    Py_XDECREF( par_passphrase );
    par_passphrase = NULL;

    Py_XDECREF( var_ct );
    var_ct = NULL;

    Py_XDECREF( var_lp );
    var_lp = NULL;

    Py_XDECREF( var_pad );
    var_pad = NULL;

    Py_XDECREF( var_counter );
    var_counter = NULL;

    Py_XDECREF( var_element );
    var_element = NULL;

    Py_XDECREF( var_unlocked );
    var_unlocked = NULL;

    Py_XDECREF( var_pt );
    var_pt = NULL;

    Py_XDECREF( var_deciphered );
    var_deciphered = NULL;

    Py_XDECREF( var_byted );
    var_byted = NULL;

    Py_XDECREF( var_decompressed );
    var_decompressed = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_3;
    finally_end_3:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_sym_decrypt_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_2_sym_decrypt_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cipher_text = NULL;
    PyObject *_python_par_locked_pad = NULL;
    PyObject *_python_par_passphrase = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "sym_decrypt() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_cipher_text == key )
            {
                assert( _python_par_cipher_text == NULL );
                _python_par_cipher_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_locked_pad == key )
            {
                assert( _python_par_locked_pad == NULL );
                _python_par_locked_pad = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_passphrase == key )
            {
                assert( _python_par_passphrase == NULL );
                _python_par_passphrase = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cipher_text, key ) == 1 )
            {
                assert( _python_par_cipher_text == NULL );
                _python_par_cipher_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_locked_pad, key ) == 1 )
            {
                assert( _python_par_locked_pad == NULL );
                _python_par_locked_pad = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_passphrase, key ) == 1 )
            {
                assert( _python_par_passphrase == NULL );
                _python_par_passphrase = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "sym_decrypt() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_cipher_text != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_cipher_text = args[ 0 ];
        Py_INCREF( _python_par_cipher_text );
    }
    else if ( _python_par_cipher_text == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_cipher_text = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 );
            Py_INCREF( _python_par_cipher_text );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_locked_pad != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_locked_pad = args[ 1 ];
        Py_INCREF( _python_par_locked_pad );
    }
    else if ( _python_par_locked_pad == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_locked_pad = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 );
            Py_INCREF( _python_par_locked_pad );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_passphrase != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_passphrase = args[ 2 ];
        Py_INCREF( _python_par_passphrase );
    }
    else if ( _python_par_passphrase == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_passphrase = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 );
            Py_INCREF( _python_par_passphrase );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_cipher_text == NULL || _python_par_locked_pad == NULL || _python_par_passphrase == NULL ))
    {
        PyObject *values[] = { _python_par_cipher_text, _python_par_locked_pad, _python_par_passphrase };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }



    return impl_function_2_sym_decrypt_of_silver_bullet$symcrypt( self, _python_par_cipher_text, _python_par_locked_pad, _python_par_passphrase );

error_exit:;

    Py_XDECREF( _python_par_cipher_text );
    Py_XDECREF( _python_par_locked_pad );
    Py_XDECREF( _python_par_passphrase );

    return NULL;
}

static PyObject *dparse_function_2_sym_decrypt_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2_sym_decrypt_of_silver_bullet$symcrypt( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_sym_decrypt_of_silver_bullet$symcrypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_contain_ascii_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = _python_par_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_49f11a29d0850af59c249d68d95451a9, module_silver_bullet$symcrypt );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_compare_left_1 = par_value;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = par_value;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3228 ], 51, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_value;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3228 ], 51, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_2 = par_value;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3228 ], 51, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_right_name_2 == NULL ))
    {
        tmp_right_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = par_value;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3228 ], 51, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_finally_handler_start_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_function );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ( par_value != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_value,
            par_value
        );
        assert( tmp_res != -1 );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_finally_handler_1;
    frame_no_exception_1:;

    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_1;
    finally_end_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_contain_ascii_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_3_contain_ascii_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "contain_ascii() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_value == key )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_value, key ) == 1 )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "contain_ascii() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_value = args[ 0 ];
        Py_INCREF( _python_par_value );
    }
    else if ( _python_par_value == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_value = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_value );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_value == NULL ))
    {
        PyObject *values[] = { _python_par_value };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }



    return impl_function_3_contain_ascii_of_silver_bullet$symcrypt( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3_contain_ascii_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_contain_ascii_of_silver_bullet$symcrypt( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_contain_ascii_of_silver_bullet$symcrypt( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_pad_gen_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject *_python_par_ui_listed )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ui_listed = _python_par_ui_listed;
    PyObject *var_pad = NULL;
    PyObject *var_counter = NULL;
    PyObject *var_op_decider = NULL;
    PyObject *var_actual_seed = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_unicode_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_55185c47e9c8d04ca40d85270ce1b9b0, module_silver_bullet$symcrypt );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_len_arg_1 = par_ui_listed;

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = impl_listcontr_1_of_function_4_pad_gen_of_silver_bullet$symcrypt( tmp_dircall_arg1_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    assert( var_pad == NULL );
    var_pad = tmp_assign_source_1;

    tmp_range_arg_2 = const_int_pos_10;
    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 89;
            goto try_finally_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_counter;
        var_counter = tmp_assign_source_4;
        Py_INCREF( var_counter );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_trng );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trng );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 680 ], 26, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 90;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 90;
    tmp_left_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 90;
        goto try_finally_handler_2;
    }
    tmp_right_name_1 = const_int_pos_3;
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 90;
        goto try_finally_handler_2;
    }
    {
        PyObject *old = var_op_decider;
        var_op_decider = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_sha1 );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1 );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3279 ], 26, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_trng );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trng );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 680 ], 26, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 91;
    tmp_unicode_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    if ( tmp_unicode_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = PyObject_Unicode( tmp_unicode_arg_1 );
    Py_DECREF( tmp_unicode_arg_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 91;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 91;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hexdigest );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 91;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    {
        PyObject *old = var_actual_seed;
        var_actual_seed = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_op_decider;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3305 ], 56, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 93;
        goto try_finally_handler_2;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 94;
        goto try_finally_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_seed );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 94;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_2 = var_actual_seed;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3361 ], 57, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 94;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 94;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 94;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_3 = var_pad;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2893 ], 49, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 95;
        goto try_finally_handler_2;
    }

    tmp_dircall_arg1_2 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 95;
        goto try_finally_handler_2;
    }
    tmp_assign_source_7 = impl_listcontr_2_of_function_4_pad_gen_of_silver_bullet$symcrypt( tmp_dircall_arg1_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 95;
        goto try_finally_handler_2;
    }
    {
        PyObject *old = var_pad;
        var_pad = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_op_decider;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3305 ], 56, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 96;
        goto try_finally_handler_2;
    }

    tmp_compare_right_2 = const_int_pos_1;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 97;
        goto try_finally_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_seed );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 97;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_3 = var_actual_seed;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3361 ], 57, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 97;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 97;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, tmp_args_element_name_3 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 97;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_4 = var_pad;

    if ( tmp_iter_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2893 ], 49, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 98;
        goto try_finally_handler_2;
    }

    tmp_dircall_arg1_3 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_dircall_arg1_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 98;
        goto try_finally_handler_2;
    }
    tmp_assign_source_8 = impl_listcontr_3_of_function_4_pad_gen_of_silver_bullet$symcrypt( tmp_dircall_arg1_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 98;
        goto try_finally_handler_2;
    }
    {
        PyObject *old = var_pad;
        var_pad = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = var_op_decider;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3305 ], 56, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 99;
        goto try_finally_handler_2;
    }

    tmp_compare_right_3 = const_int_pos_2;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 100;
        goto try_finally_handler_2;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_seed );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 100;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_4 = var_actual_seed;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3361 ], 57, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 100;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 100;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, tmp_args_element_name_4 );
    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 100;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_5 = var_pad;

    if ( tmp_iter_arg_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2893 ], 49, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 101;
        goto try_finally_handler_2;
    }

    tmp_dircall_arg1_4 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_dircall_arg1_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 101;
        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = impl_listcontr_4_of_function_4_pad_gen_of_silver_bullet$symcrypt( tmp_dircall_arg1_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 101;
        goto try_finally_handler_2;
    }
    {
        PyObject *old = var_pad;
        var_pad = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_return_value = var_pad;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2893 ], 49, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_finally_handler_start_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_function );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ( var_pad != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pad,
            var_pad
        );
        assert( tmp_res != -1 );

    }
    if ( var_counter != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_counter,
            var_counter
        );
        assert( tmp_res != -1 );

    }
    if ( var_op_decider != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_op_decider,
            var_op_decider
        );
        assert( tmp_res != -1 );

    }
    if ( var_actual_seed != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_actual_seed,
            var_actual_seed
        );
        assert( tmp_res != -1 );

    }
    if ( par_ui_listed != NULL )
    {
        tmp_res = PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ui_listed,
            par_ui_listed
        );
        assert( tmp_res != -1 );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_finally_handler_1;
    frame_no_exception_1:;

    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_ui_listed );
    par_ui_listed = NULL;

    Py_XDECREF( var_pad );
    var_pad = NULL;

    Py_XDECREF( var_counter );
    var_counter = NULL;

    Py_XDECREF( var_op_decider );
    var_op_decider = NULL;

    Py_XDECREF( var_actual_seed );
    var_actual_seed = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_2;
    finally_end_2:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_pad_gen_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_4_pad_gen_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ui_listed = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "pad_gen() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_ui_listed == key )
            {
                assert( _python_par_ui_listed == NULL );
                _python_par_ui_listed = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ui_listed, key ) == 1 )
            {
                assert( _python_par_ui_listed == NULL );
                _python_par_ui_listed = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pad_gen() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Copy normal parameter values given as part of the argument list to the
    // respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_ui_listed != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_ui_listed = args[ 0 ];
        Py_INCREF( _python_par_ui_listed );
    }
    else if ( _python_par_ui_listed == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_ui_listed = PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 );
            Py_INCREF( _python_par_ui_listed );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_ui_listed == NULL ))
    {
        PyObject *values[] = { _python_par_ui_listed };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }



    return impl_function_4_pad_gen_of_silver_bullet$symcrypt( self, _python_par_ui_listed );

error_exit:;

    Py_XDECREF( _python_par_ui_listed );

    return NULL;
}

static PyObject *dparse_function_4_pad_gen_of_silver_bullet$symcrypt( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_pad_gen_of_silver_bullet$symcrypt( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_pad_gen_of_silver_bullet$symcrypt( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = _python_par_$0;
    PyObject *var_num = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code
    // Tried code
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 87;
            goto try_finally_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    {
        PyObject *old = var_num;
        var_num = tmp_assign_source_3;
        Py_INCREF( var_num );
        Py_XDECREF( old );
    }

    tmp_append_to_1 = tmp_contraction_result;

    tmp_append_value_1 = const_int_0;
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 87;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 87;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_2;
    tmp_return_value = NULL;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_2;
    finally_end_2:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( listcontr_1_of_function_4_pad_gen_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = _python_par_$0;
    PyObject *var_element = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code
    // Tried code
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 95;
            goto try_finally_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    {
        PyObject *old = var_element;
        var_element = tmp_assign_source_3;
        Py_INCREF( var_element );
        Py_XDECREF( old );
    }

    tmp_append_to_1 = tmp_contraction_result;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_contain_ascii );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contain_ascii );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2675 ], 35, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }

    tmp_left_name_1 = var_element;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_randrange );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }

    PyThreadState_GET()->frame->f_lineno = 95;
    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 95;
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 95;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_2;
    tmp_return_value = NULL;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_element );
    var_element = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_2;
    finally_end_2:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( listcontr_2_of_function_4_pad_gen_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = _python_par_$0;
    PyObject *var_element = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code
    // Tried code
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 98;
            goto try_finally_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    {
        PyObject *old = var_element;
        var_element = tmp_assign_source_3;
        Py_INCREF( var_element );
        Py_XDECREF( old );
    }

    tmp_append_to_1 = tmp_contraction_result;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_contain_ascii );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contain_ascii );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2675 ], 35, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }

    tmp_left_name_1 = var_element;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_randrange );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }

    PyThreadState_GET()->frame->f_lineno = 98;
    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, tmp_args_element_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 98;
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 98;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_2;
    tmp_return_value = NULL;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_element );
    var_element = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_2;
    finally_end_2:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( listcontr_3_of_function_4_pad_gen_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_4_of_function_4_pad_gen_of_silver_bullet$symcrypt( PyObject *_python_par_$0 )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = _python_par_$0;
    PyObject *var_element = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code
    // Tried code
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 101;
            goto try_finally_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    {
        PyObject *old = var_element;
        var_element = tmp_assign_source_3;
        Py_INCREF( var_element );
        Py_XDECREF( old );
    }

    tmp_append_to_1 = tmp_contraction_result;

    tmp_left_name_1 = var_element;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2865 ], 28, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 101;
        goto try_finally_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_randrange );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 101;
        goto try_finally_handler_2;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii_value );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2942 ], 33, 0 );
        exception_tb = NULL;
        ADD_EXCEPTION_CONTEXT( &exception_type, &exception_value );

        PyThreadState_GET()->frame->f_lineno = 101;
        goto try_finally_handler_2;
    }

    PyThreadState_GET()->frame->f_lineno = 101;
    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, tmp_args_element_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 101;
        goto try_finally_handler_2;
    }
    tmp_append_value_1 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 101;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 101;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        PyThreadState_GET()->frame->f_lineno = 101;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_2;
    tmp_return_value = NULL;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_return_value = NULL;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_element );
    var_element = NULL;

    // Re-raise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto function_exception_exit;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto function_return_exit;
    }

    goto finally_end_2;
    finally_end_2:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( listcontr_4_of_function_4_pad_gen_of_silver_bullet$symcrypt );

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1_sym_encrypt_of_silver_bullet$symcrypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_sym_encrypt_of_silver_bullet$symcrypt,
        dparse_function_1_sym_encrypt_of_silver_bullet$symcrypt,
        const_str_plain_sym_encrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68e41b73dfa6944cc106902ffd5438d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_silver_bullet$symcrypt,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_sym_decrypt_of_silver_bullet$symcrypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_sym_decrypt_of_silver_bullet$symcrypt,
        dparse_function_2_sym_decrypt_of_silver_bullet$symcrypt,
        const_str_plain_sym_decrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b6f65b4524b4eaa08b80e43c28d5c425,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_silver_bullet$symcrypt,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_contain_ascii_of_silver_bullet$symcrypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_contain_ascii_of_silver_bullet$symcrypt,
        dparse_function_3_contain_ascii_of_silver_bullet$symcrypt,
        const_str_plain_contain_ascii,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_49f11a29d0850af59c249d68d95451a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_silver_bullet$symcrypt,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_pad_gen_of_silver_bullet$symcrypt(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_pad_gen_of_silver_bullet$symcrypt,
        dparse_function_4_pad_gen_of_silver_bullet$symcrypt,
        const_str_plain_pad_gen,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_55185c47e9c8d04ca40d85270ce1b9b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_silver_bullet$symcrypt,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_silver_bullet$symcrypt =
{
    PyModuleDef_HEAD_INIT,
    "silver_bullet.symcrypt",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{

    { NULL, NULL, 0 }
};

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( silver_bullet$symcrypt )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_silver_bullet$symcrypt );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( meta_path_loader_entries );
#endif

    _initModuleConstants();
    _initModuleCodeObjects();

    // puts( "in initsilver_bullet$symcrypt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_silver_bullet$symcrypt = Py_InitModule4(
        "silver_bullet.symcrypt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_silver_bullet$symcrypt = PyModule_Create( &mdef_silver_bullet$symcrypt );
#endif

    moduledict_silver_bullet$symcrypt = (PyDictObject *)((PyModuleObject *)module_silver_bullet$symcrypt)->md_dict;

    CHECK_OBJECT( module_silver_bullet$symcrypt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7a909aac4e038640aef15c8f252d17be, module_silver_bullet$symcrypt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_silver_bullet$symcrypt );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b0ef7ec073310b013d83784af2061d98;
    UPDATE_STRING_DICT0( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_silver_bullet;
    UPDATE_STRING_DICT0( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_bd09c11c14815e5dc6ddfe690f081427, module_silver_bullet$symcrypt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_silver_bullet$symcrypt)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_zlib, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_zlib, tmp_assign_source_5 );
    tmp_import_globals_2 = ((PyModuleObject *)module_silver_bullet$symcrypt)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_random, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_random, tmp_assign_source_6 );
    tmp_import_globals_3 = ((PyModuleObject *)module_silver_bullet$symcrypt)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_hashlib, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_sha1_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_sha1 );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_sha1, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_silver_bullet$symcrypt)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_3110a82eea8f688e0760b7b8ad436ed2, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_trng_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_trng );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_trng, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_function_1_sym_encrypt_of_silver_bullet$symcrypt(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_sym_encrypt, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_function_2_sym_decrypt_of_silver_bullet$symcrypt(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_sym_decrypt, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_ascii_value, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_function_3_contain_ascii_of_silver_bullet$symcrypt(  );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_module->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_contain_ascii, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_function_4_pad_gen_of_silver_bullet$symcrypt(  );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_silver_bullet$symcrypt, (Nuitka_StringObject *)const_str_plain_pad_gen, tmp_assign_source_13 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_silver_bullet$symcrypt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
