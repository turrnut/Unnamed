/**
 * Author: turrnut
 * Copyrighted © turrnut under the Apache 2.0 license
 *
 * We hoped that you will use this piece of open source
 * software fairly. read the LICENSE for details for
 * more details about how you can use it, you have freedom
 * to distribute and use this file in your project. However,
 * you will have to state changes you made and include the
 * orginal author of this file.
 *
 * ir.h
 *
 */

#ifndef ir_header
#define ir_header

#include "../base/base.h"
#include "../data/data.h"

/**
 * Contains enum types of Instruction codes.
 */
typedef enum
{
    INS_DATA,
    INS_RETURN,
    INS_NEGATIVE,
    INS_ADD,
    INS_SUB,
    INS_MUL,
    INS_DIV
} InsCode;

typedef struct
{
    int row;
    int col;

} Position;

/**
 * An array struct for Intermediate Reprensentation (IR)
 */
typedef struct
{
    int count;
    int volume;
    uint8_t *code;
    DataCollection coll;
    Position pos;

} IR;

void emptyIR(IR *ir);
void initIR(IR *ir);
void createIR(IR *ir, uint8_t code, Position where);
void releaseIR(IR *ir);
int addData(IR *ir, Data d);

#endif
