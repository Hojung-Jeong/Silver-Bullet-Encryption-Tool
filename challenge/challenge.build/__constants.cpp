
#include "nuitka/prelude.hpp"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_int_0;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_str_empty;
PyObject *const_dict_empty;
PyObject *const_bytes_empty;
PyObject *const_str_plain_r;
PyObject *const_str_plain_w;
PyObject *const_tuple_empty;
PyObject *const_str_plain_end;
PyObject *const_str_plain_int;
PyObject *const_str_plain_len;
PyObject *const_str_plain_file;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_join;
PyObject *const_str_plain_open;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_send;
PyObject *const_str_plain_site;
PyObject *const_str_plain_trng;
PyObject *const_str_plain_type;
PyObject *const_str_plain_close;
PyObject *const_str_plain_print;
PyObject *const_str_plain_range;
PyObject *const_str_plain_split;
PyObject *const_str_plain_throw;
PyObject *const_str_plain_write;
PyObject *const_str_plain_opener;
PyObject *const_str_plain_reader;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain___cached__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___loader__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain_deciphered;
PyObject *const_str_plain_locked_pad;
PyObject *const_str_plain___package__;
PyObject *const_str_plain_cipher_text;
PyObject *const_str_plain_sym_decrypt;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain_silver_bullet;
PyObject *const_tuple_str_plain_trng_tuple;
PyObject *const_str_digest_3110a82eea8f688e0760b7b8ad436ed2;
PyObject *const_str_digest_7a909aac4e038640aef15c8f252d17be;
PyObject *const_str_digest_c6bd178b372b0ddd17fff48819badc6a;

#if defined(_WIN32) && defined(_NUITKA_EXE)
#include <Windows.h>
const unsigned char* constant_bin;
struct __initResourceConstants
{
    __initResourceConstants()
    {
        constant_bin = (const unsigned char*)LockResource(
            LoadResource(
                NULL,
                FindResource(NULL, MAKEINTRESOURCE(3), RT_RCDATA)
            )
        );
    }
} __initResourceConstants_static_initializer;
#else
extern "C" const unsigned char constant_bin[];
#endif

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyLong_FromUnsignedLong( 0ul );
    const_int_pos_1 = PyLong_FromUnsignedLong( 1ul );
    const_int_pos_2 = PyLong_FromUnsignedLong( 2ul );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_bytes_empty = UNSTREAM_BYTES( &constant_bin[ 0 ], 0 );
    const_str_plain_r = UNSTREAM_STRING( &constant_bin[ 61 ], 1, 1 );
    const_str_plain_w = UNSTREAM_STRING( &constant_bin[ 30 ], 1, 1 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_end = UNSTREAM_STRING( &constant_bin[ 4846 ], 3, 1 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 3618 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 3485 ], 3, 1 );
    const_str_plain_file = UNSTREAM_STRING( &constant_bin[ 3541 ], 4, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 4849 ], 4, 1 );
    const_str_plain_join = UNSTREAM_STRING( &constant_bin[ 4853 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 2562 ], 4, 1 );
    const_str_plain_read = UNSTREAM_STRING( &constant_bin[ 744 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 4857 ], 4, 1 );
    const_str_plain_send = UNSTREAM_STRING( &constant_bin[ 4861 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 4865 ], 4, 1 );
    const_str_plain_trng = UNSTREAM_STRING( &constant_bin[ 686 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 4869 ], 4, 1 );
    const_str_plain_close = UNSTREAM_STRING( &constant_bin[ 4873 ], 5, 1 );
    const_str_plain_print = UNSTREAM_STRING( &constant_bin[ 4878 ], 5, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 4775 ], 5, 1 );
    const_str_plain_split = UNSTREAM_STRING( &constant_bin[ 4883 ], 5, 1 );
    const_str_plain_throw = UNSTREAM_STRING( &constant_bin[ 4888 ], 5, 1 );
    const_str_plain_write = UNSTREAM_STRING( &constant_bin[ 4893 ], 5, 1 );
    const_str_plain_opener = UNSTREAM_STRING( &constant_bin[ 4492 ], 6, 1 );
    const_str_plain_reader = UNSTREAM_STRING( &constant_bin[ 999 ], 6, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 4898 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 4905 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 4912 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 4919 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 4926 ], 7, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 4933 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 4941 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 4949 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING( &constant_bin[ 4957 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 4965 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 4973 ], 8, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 4981 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 4990 ], 9, 1 );
    const_str_plain___cached__ = UNSTREAM_STRING( &constant_bin[ 4999 ], 10, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 5009 ], 10, 1 );
    const_str_plain___loader__ = UNSTREAM_STRING( &constant_bin[ 5019 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 5029 ], 10, 1 );
    const_str_plain_deciphered = UNSTREAM_STRING( &constant_bin[ 640 ], 10, 1 );
    const_str_plain_locked_pad = UNSTREAM_STRING( &constant_bin[ 535 ], 10, 1 );
    const_str_plain___package__ = UNSTREAM_STRING( &constant_bin[ 5039 ], 11, 1 );
    const_str_plain_cipher_text = UNSTREAM_STRING( &constant_bin[ 478 ], 11, 1 );
    const_str_plain_sym_decrypt = UNSTREAM_STRING( &constant_bin[ 435 ], 11, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 5050 ], 12, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 5062 ], 13, 1 );
    const_str_plain_silver_bullet = UNSTREAM_STRING( &constant_bin[ 3996 ], 13, 1 );
    const_tuple_str_plain_trng_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trng_tuple, 0, const_str_plain_trng ); Py_INCREF( const_str_plain_trng );
    const_str_digest_3110a82eea8f688e0760b7b8ad436ed2 = UNSTREAM_STRING( &constant_bin[ 5075 ], 18, 0 );
    const_str_digest_7a909aac4e038640aef15c8f252d17be = UNSTREAM_STRING( &constant_bin[ 5093 ], 22, 0 );
    const_str_digest_c6bd178b372b0ddd17fff48819badc6a = UNSTREAM_STRING( &constant_bin[ 5115 ], 2, 1 );
}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif


void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
