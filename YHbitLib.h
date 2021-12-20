#ifndef YHBITLIB_H
#define YHBITLIB_H __DATE__ ", " __TIME__

#include <stdlib.h>

/*  *  *  *  *  *  *  *  *  *  *  *  *
 *                                   *
 * Warning! This library does not    *
 * contain any implementation files. *
 * Just include me and use it.       *
 *                                   *
 *   extern "C" { } is not needed    *
 *                                   *
 *  *  *  *  *  *  *  *  *  *  *  *  */

/*  *  *  *  *  *  *  *  *  *  *  *  *
 *                                   *
 * The aim of writing this library   *
 * is to let programmers understand  *
 * the operation of the bits         *
 * under the bytes and strings       *
 * you print and see on the monitor. *
 *                                   *
 *  *  *  *  *  *  *  *  *  *  *  *  */

#ifdef __cplusplus
#define BEGIN_CUSTOMLIB_NAMESPACE \
namespace YH { \
        namespace Lib {
#define ENDOF_CUSTOMLIB_NAMESPACE \
    } \
}
#define BEGIN_FUNC_BITS_NAMESPACE \
namespace Func { \
    namespace bits {
#define ENDOF_FUNC_BITS_NAMESPACE \
    } \
}
#else
#define BEGIN_CUSTOMLIB_NAMESPACE
#define ENDOF_CUSTOMLIB_NAMESPACE
#define BEGIN_FUNC_BITS_NAMESPACE
#define ENDOF_FUNC_BITS_NAMESPACE
#endif /* #ifdef __cplusplus */

/* sample */
#define BIT_FIELD_BYTE_(byte_idx,size) \
unsigned int b##byte_idx##0 : size; \
unsigned int b##byte_idx##1 : size; \
unsigned int b##byte_idx##2 : size; \
unsigned int b##byte_idx##3 : size; \
unsigned int b##byte_idx##4 : size; \
unsigned int b##byte_idx##5 : size; \
unsigned int b##byte_idx##6 : size; \
unsigned int b##byte_idx##7 : size;
/**
// #define BYTE_0(size) \
unsigned int b00 : size; \
unsigned int b01 : size; \
unsigned int b02 : size; \
unsigned int b03 : size; \
unsigned int b04 : size; \
unsigned int b05 : size; \
unsigned int b06 : size; \
unsigned int b07 : size;
// #define BYTE_1(size) \
unsigned int b10 : size; \
unsigned int b11 : size; \
unsigned int b12 : size; \
unsigned int b13 : size; \
unsigned int b14 : size; \
unsigned int b15 : size; \
unsigned int b16 : size; \
unsigned int b17 : size;
// #define BYTE_2(size) \
unsigned int b20 : size; \
unsigned int b21 : size; \
unsigned int b22 : size; \
unsigned int b23 : size; \
unsigned int b24 : size; \
unsigned int b25 : size; \
unsigned int b26 : size; \
unsigned int b27 : size;
// #define BYTE_3(size) \
unsigned int b30 : size; \
unsigned int b31 : size; \
unsigned int b32 : size; \
unsigned int b33 : size; \
unsigned int b34 : size; \
unsigned int b35 : size; \
unsigned int b36 : size; \
unsigned int b37 : size;
// #define BYTE_4(size) \
unsigned int b40 : size; \
unsigned int b41 : size; \
unsigned int b42 : size; \
unsigned int b43 : size; \
unsigned int b44 : size; \
unsigned int b45 : size; \
unsigned int b46 : size; \
unsigned int b47 : size;
// #define BYTE_5(size) \
unsigned int b50 : size; \
unsigned int b51 : size; \
unsigned int b52 : size; \
unsigned int b53 : size; \
unsigned int b54 : size; \
unsigned int b55 : size; \
unsigned int b56 : size; \
unsigned int b57 : size;
// #define BYTE_6(size) \
unsigned int b60 : size; \
unsigned int b61 : size; \
unsigned int b62 : size; \
unsigned int b63 : size; \
unsigned int b64 : size; \
unsigned int b65 : size; \
unsigned int b66 : size; \
unsigned int b67 : size;
// #define BYTE_7(size) \
unsigned int b70 : size; \
unsigned int b71 : size; \
unsigned int b72 : size; \
unsigned int b73 : size; \
unsigned int b74 : size; \
unsigned int b75 : size; \
unsigned int b76 : size; \
unsigned int b77 : size;
// #define BYTE_8(size) \
unsigned int b80 : size; \
unsigned int b81 : size; \
unsigned int b82 : size; \
unsigned int b83 : size; \
unsigned int b84 : size; \
unsigned int b85 : size; \
unsigned int b86 : size; \
unsigned int b87 : size;
// #define BYTE_9(size) \
unsigned int b90 : size; \
unsigned int b91 : size; \
unsigned int b92 : size; \
unsigned int b93 : size; \
unsigned int b94 : size; \
unsigned int b95 : size; \
unsigned int b96 : size; \
unsigned int b97 : size;
// #define BYTE_A(size) \
unsigned int bA0 : size; \
unsigned int bA1 : size; \
unsigned int bA2 : size; \
unsigned int bA3 : size; \
unsigned int bA4 : size; \
unsigned int bA5 : size; \
unsigned int bA6 : size; \
unsigned int bA7 : size;
// #define BYTE_B(size) \
unsigned int bB0 : size; \
unsigned int bB1 : size; \
unsigned int bB2 : size; \
unsigned int bB3 : size; \
unsigned int bB4 : size; \
unsigned int bB5 : size; \
unsigned int bB6 : size; \
unsigned int bB7 : size;
// #define BYTE_C(size) \
unsigned int bC0 : size; \
unsigned int bC1 : size; \
unsigned int bC2 : size; \
unsigned int bC3 : size; \
unsigned int bC4 : size; \
unsigned int bC5 : size; \
unsigned int bC6 : size; \
unsigned int bC7 : size;
// #define BYTE_D(size) \
unsigned int bD0 : size; \
unsigned int bD1 : size; \
unsigned int bD2 : size; \
unsigned int bD3 : size; \
unsigned int bD4 : size; \
unsigned int bD5 : size; \
unsigned int bD6 : size; \
unsigned int bD7 : size;
// #define BYTE_E(size) \
unsigned int bE0 : size; \
unsigned int bE1 : size; \
unsigned int bE2 : size; \
unsigned int bE3 : size; \
unsigned int bE4 : size; \
unsigned int bE5 : size; \
unsigned int bE6 : size; \
unsigned int bE7 : size;
// #define BYTE_F(size) \
unsigned int bF0 : size; \
unsigned int bF1 : size; \
unsigned int bF2 : size; \
unsigned int bF3 : size; \
unsigned int bF4 : size; \
unsigned int bF5 : size; \
unsigned int bF6 : size; \
unsigned int bF7 : size;
//*/

BEGIN_CUSTOMLIB_NAMESPACE
        /*
            / byte[0] /
            unsigned int b1 : 1;
            unsigned int b2 : 1;
            unsigned int b3 : 1;
            unsigned int b4 : 1;
            unsigned int b5 : 1;
            unsigned int b6 : 1;
            unsigned int b7 : 1;
            unsigned int b8 : 1;
        */

        /* 8-bit */
        typedef struct {
            BIT_FIELD_BYTE_(0,1)
        } bit_field_1_byte;
        /* 16-bit */
        typedef struct {
            BIT_FIELD_BYTE_(0,1)
            BIT_FIELD_BYTE_(1,1)
        } bit_field_2_byte;
        /* 32-bit */
        typedef struct {
            BIT_FIELD_BYTE_(0,1)
            BIT_FIELD_BYTE_(1,1)
            BIT_FIELD_BYTE_(2,1)
            BIT_FIELD_BYTE_(3,1)
        } bit_field_4_byte;
        /* 64-bit */
        typedef struct {
            BIT_FIELD_BYTE_(0,1)
            BIT_FIELD_BYTE_(1,1)
            BIT_FIELD_BYTE_(2,1)
            BIT_FIELD_BYTE_(3,1)
            BIT_FIELD_BYTE_(4,1)
            BIT_FIELD_BYTE_(5,1)
            BIT_FIELD_BYTE_(6,1)
            BIT_FIELD_BYTE_(7,1)
        } bit_field_8_byte;
        /* 128-bit */
        typedef struct {
            BIT_FIELD_BYTE_(0,1)
            BIT_FIELD_BYTE_(1,1)
            BIT_FIELD_BYTE_(2,1)
            BIT_FIELD_BYTE_(3,1)
            BIT_FIELD_BYTE_(4,1)
            BIT_FIELD_BYTE_(5,1)
            BIT_FIELD_BYTE_(6,1)
            BIT_FIELD_BYTE_(7,1)
            BIT_FIELD_BYTE_(8,1)
            BIT_FIELD_BYTE_(9,1)
            BIT_FIELD_BYTE_(A,1)
            BIT_FIELD_BYTE_(B,1)
            BIT_FIELD_BYTE_(C,1)
            BIT_FIELD_BYTE_(D,1)
            BIT_FIELD_BYTE_(E,1)
            BIT_FIELD_BYTE_(F,1)
        } bit_field_16_byte;
        /* 1-byte */
        typedef union {
            int8_t dval;
            uint8_t udval;
            bit_field_1_byte bval;
        } One_byte;
        /* 2-byte */
        typedef union {
            int16_t dval;
            uint16_t udval;
            bit_field_2_byte bval;
        } Two_byte;
        /* 4-byte */
        typedef union {
            int32_t dval;
            uint32_t udval;
            bit_field_4_byte bval;
            float fval;
        } Four_byte;
        /* 8-byte */
        typedef union {
            int64_t dval;
            uint64_t udval;
            bit_field_8_byte bval;
            double fval;
        } Eight_byte;
        /* 16-byte */
        #if !defined(ARDUINO)
        typedef union {
            // int128_t dval;
            // uint128_t udval;
            __int128_t dval;    // not standardized C nor C++, for gnu gcc g++ compiler only   ^   ^
            __uint128_t udval;  // not standardized C nor C++, for gnu gcc g++ compiler only    \_/
            bit_field_16_byte bval;
            long double fval;
        } Sixteen_byte;
        #endif // #if !defined(ARDUINO)
        /* */
        BEGIN_FUNC_BITS_NAMESPACE
        /* function declaration */
        #if !defined(ARDUINO)
        int print_16byte (Sixteen_byte val, int (*printer_function)(int));
        int print_reverse_16byte (Sixteen_byte val, int (*printer_function)(int));
        Sixteen_byte *assign_16byte (Sixteen_byte *ptr, const uint8_t *input);
        Sixteen_byte *assign_reverse_16byte (Sixteen_byte *ptr, const uint8_t *input);
        #endif // #if !defined(ARDUINO)

        #ifdef __cplusplus

        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T read_bit_from_left (T val, const size_t idx);

        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T read_bit_from_right (T val, const size_t idx);


        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit, bit_status: setting the bit to 0 or 1
        T &write_bit_from_left (T &val, const size_t idx, const bool bit_status);

        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit, bit_status: setting the bit to 0 or 1
        T &write_bit_from_right (T &val, const size_t idx, const bool bit_status);


        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T &toggle_bit_from_left (T &val, const size_t idx);

        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T &toggle_bit_from_right (T &val, const size_t idx);



        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T read_bit_from_left (T val, const size_t idx) { return read_bit_from_right(   val, ( sizeof(val) * 8 - 1 - idx )   ); }
        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T read_bit_from_right (T val, const size_t idx) { return (val >> idx) & (T)1; }

        // template <class T>
        // T &write_bit_from_right (T &val, const size_t idx, const bool bit_status) {
        //     // when status to write == 0
        //     // cnsd    1001 1110, write 0 to [1]
        //                         //        ~1001 1110
        //                         //      == 0110 0001
        //     // cnsd   |0000 0010                note: reversed
        //     // rslt == 0110 0011
        //             // insert: conclude: 00 -> 1, 10 -> 0, 11 -> 1
        //     //        ~0110 0011
        //     //      == 1001 1100
        //     // becomes 1001 1100
        //
        //     // another example
        //     // cnsd    1010 0001, write 0 to [1]
        //                         //        ~1010 0001
        //                         //      == 0101 1110
        //     // cnsd   |0000 0010                note: reversed
        //     // rslt == 0101 1110
        //             // insert: conclude:  00 -> 1, 10 -> 0, 01 -> 1,
        //     //        ~0101 1110
        //     //      == 1010 0001
        //     // becomes 1010 0001 (no change)
        //     //
        //     // conclusion: 00 -> 1, 10 -> 0, 01 -> 1, 11 -> 1
        //     // first 2 operations cannot be simplified
        //
        //     // cnsd    1001 1110, write 0 to [1]
        //     // statbit:1111 1101
        //     // wait, what if
        //     //         1001 1110
        //     //        &1111 1101
        //     //      == 1001 1100
        //     //        ~1001 1100
        //     //      == 0110 0011
        //     // require result: 1001 1100
        //     if (!bit_status) val &= ~( (T)(1) << idx ); // old approach: val = ~(   (~val) | ( (T)(1) << idx )   );
        //     // when status to write == 1
        //     //         0000 0000, write 1 to [1]
        //     // becomes 0000 0010
        //     // ???? ???1 << 1 == ???? ??1?
        //     if (bit_status) val |= ( (T)(1) << idx );
        // }
        
        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit, bit_status: setting the bit to 0 or 1
        T &write_bit_from_left (T &val, const size_t idx, const bool bit_status) { return write_bit_from_right(val, sizeof(val) * 8 - 1 - idx, bit_status); }
        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit, bit_status: setting the bit to 0 or 1
        T &write_bit_from_right (T &val, const size_t idx, const bool bit_status) {
            if (idx >= sizeof(T) * 8) return val;
            if (bit_status) return (   val |= ( (T)(1) << idx )   );
            return (   val &= ~( (T)(1) << idx )   );
        }


        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T &toggle_bit_from_left (T &val, const size_t idx) { return toggle_bit_from_right(   val, ( sizeof(val) * 8 - 1 - idx )   ); }

        template <class T>
        // this function only accepts unsigned integer type
        // val: unsigned int type, idx: the index of the bit in units of bit
        T &toggle_bit_from_right (T &val, const size_t idx) {
            return (   val ^= ( (T)(1) << idx )   );
        }

        #else
        #define read_bit_from_right(val,idx) ((val>>idx)&(val-val+1))
        #define read_bit_from_left(val,idx) read_bit_from_right(val,(sizeof(val)*8-1-idx))
        #define write_bit_from_right(val,idx,bit_status) bit_status?(val|=((val-val+1)<<idx)):(val&= ~((val-val+1)<<idx))
        #define write_bit_from_left(val,idx,bit_status) write_bit_from_right(val,(sizeof(val)*8-1-idx),bit_status)
        #define toggle_bit_from_right(val,idx) (val^=((val-val+1) << idx))
        #define toggle_bit_from_left(val,idx) toggle_bit_from_right(val,(sizeof(val)*8-1-idx))
        #endif // #ifndef __cplusplus
        ENDOF_FUNC_BITS_NAMESPACE

ENDOF_CUSTOMLIB_NAMESPACE

#endif /* #ifndef YHBITLIB_H */