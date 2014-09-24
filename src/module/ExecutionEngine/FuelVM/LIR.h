/****************************************************************************
 * Copyright (c) 2012-2013, Masahiro Ide <ide@konohascript.org> All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ***************************************************************************/

/* This file was automatically generated by GenLIR.k. Do not edit! */
#ifndef LIR_H
#define LIR_H

#define OPCODE_ThreadedCode 0
typedef struct OPThreadedCode {
    LIRHeader Header;
    uchar InvokedCount;
    uchar StackSize;
    ushort CodeSize;
} PACKED OPThreadedCode;

#define OPFIELDSIZE_ThreadedCode 3
#define DUMP_ThreadedCode(OP_3) OP_3(ThreadedCode, uchar, InvokedCount, uchar, StackSize, ushort, CodeSize)

#define OPCODE_Prologue 1
typedef struct OPPrologue {
    LIRHeader Header;
    uchar InvokedCount;
    uchar StackSize;
    ushort CodeSize;
} PACKED OPPrologue;

#define OPFIELDSIZE_Prologue 3
#define DUMP_Prologue(OP_3) OP_3(Prologue, uchar, InvokedCount, uchar, StackSize, ushort, CodeSize)

#define OPCODE_LoadConstant 2
typedef struct OPLoadConstant {
    LIRHeader Header;
    VMRegister Dst;
    SValue Src;
} PACKED OPLoadConstant;

#define OPFIELDSIZE_LoadConstant 2
#define DUMP_LoadConstant(OP_2) OP_2(LoadConstant, VMRegister, Dst, SValue, Src)

#define OPCODE_LoadArgumentI 3
typedef struct OPLoadArgumentI {
    LIRHeader Header;
    VMRegister Dst;
    uint SrcIdx;
} PACKED OPLoadArgumentI;

#define OPFIELDSIZE_LoadArgumentI 2
#define DUMP_LoadArgumentI(OP_2) OP_2(LoadArgumentI, VMRegister, Dst, uint, SrcIdx)

#define OPCODE_LoadArgumentO 4
typedef struct OPLoadArgumentO {
    LIRHeader Header;
    VMRegister Dst;
    uint SrcIdx;
} PACKED OPLoadArgumentO;

#define OPFIELDSIZE_LoadArgumentO 2
#define DUMP_LoadArgumentO(OP_2) OP_2(LoadArgumentO, VMRegister, Dst, uint, SrcIdx)

#define OPCODE_LoadLocal 5
typedef struct OPLoadLocal {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister Src;
} PACKED OPLoadLocal;

#define OPFIELDSIZE_LoadLocal 2
#define DUMP_LoadLocal(OP_2) OP_2(LoadLocal, VMRegister, Dst, VMRegister, Src)

#define OPCODE_LoadField 6
typedef struct OPLoadField {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister Src;
    uint FieldIdx;
} PACKED OPLoadField;

#define OPFIELDSIZE_LoadField 3
#define DUMP_LoadField(OP_3) OP_3(LoadField, VMRegister, Dst, VMRegister, Src, uint, FieldIdx)

#define OPCODE_StoreLocal 7
typedef struct OPStoreLocal {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister Src;
} PACKED OPStoreLocal;

#define OPFIELDSIZE_StoreLocal 2
#define DUMP_StoreLocal(OP_2) OP_2(StoreLocal, VMRegister, Dst, VMRegister, Src)

#define OPCODE_StoreField 8
typedef struct OPStoreField {
    LIRHeader Header;
    VMRegister Dst;
    uint FieldIdx;
    VMRegister Src;
} PACKED OPStoreField;

#define OPFIELDSIZE_StoreField 3
#define DUMP_StoreField(OP_3) OP_3(StoreField, VMRegister, Dst, uint, FieldIdx, VMRegister, Src)

#define OPCODE_New 9
typedef struct OPNew {
    LIRHeader Header;
    VMRegister Dst;
    uintptr_t Param;
    TypeId Type;
} PACKED OPNew;

#define OPFIELDSIZE_New 3
#define DUMP_New(OP_3) OP_3(New, VMRegister, Dst, uintptr_t, Param, TypeId, Type)

#define OPCODE_Call 10
typedef struct OPCall {
    LIRHeader Header;
    uchar ParamSize;
    kMethodPtr Mtd;
    kObjectPtr Obj;
    uintptr_t uline;
} PACKED OPCall;

#define OPFIELDSIZE_Call 4
#define DUMP_Call(OP_4) OP_4(Call, uchar, ParamSize, kMethodPtr, Mtd, kObjectPtr, Obj, uintptr_t, uline)

#define OPCODE_VCall 11
typedef struct OPVCall {
    LIRHeader Header;
    uint ParamSize;
    Cache CacheInfo;
    uintptr_t uline;
} PACKED OPVCall;

#define OPFIELDSIZE_VCall 3
#define DUMP_VCall(OP_3) OP_3(VCall, uint, ParamSize, Cache, CacheInfo, uintptr_t, uline)

#define OPCODE_PushI 12
typedef struct OPPushI {
    LIRHeader Header;
    VMRegister Src;
} PACKED OPPushI;

#define OPFIELDSIZE_PushI 1
#define DUMP_PushI(OP_1) OP_1(PushI, VMRegister, Src)

#define OPCODE_PushO 13
typedef struct OPPushO {
    LIRHeader Header;
    VMRegister Src;
} PACKED OPPushO;

#define OPFIELDSIZE_PushO 1
#define DUMP_PushO(OP_1) OP_1(PushO, VMRegister, Src)

#define OPCODE_PopI 14
typedef struct OPPopI {
    LIRHeader Header;
    VMRegister Dst;
} PACKED OPPopI;

#define OPFIELDSIZE_PopI 1
#define DUMP_PopI(OP_1) OP_1(PopI, VMRegister, Dst)

#define OPCODE_PopO 15
typedef struct OPPopO {
    LIRHeader Header;
    VMRegister Dst;
} PACKED OPPopO;

#define OPFIELDSIZE_PopO 1
#define DUMP_PopO(OP_1) OP_1(PopO, VMRegister, Dst)

#define OPCODE_Func 16
typedef struct OPFunc {
    LIRHeader Header;
    VMRegister Dst;
    IArray StackLayout;
} PACKED OPFunc;

#define OPFIELDSIZE_Func 2
#define DUMP_Func(OP_2) OP_2(Func, VMRegister, Dst, IArray, StackLayout)

#define OPCODE_Test 17
typedef struct OPTest {
    LIRHeader Header;
    VMRegister Src;
    TestFunc Func;
    Cache CacheInfo;
} PACKED OPTest;

#define OPFIELDSIZE_Test 3
#define DUMP_Test(OP_3) OP_3(Test, VMRegister, Src, TestFunc, Func, Cache, CacheInfo)

#define OPCODE_ReturnI 18
typedef struct OPReturnI {
    LIRHeader Header;
    VMRegister Src;
} PACKED OPReturnI;

#define OPFIELDSIZE_ReturnI 1
#define DUMP_ReturnI(OP_1) OP_1(ReturnI, VMRegister, Src)

#define OPCODE_ReturnO 19
typedef struct OPReturnO {
    LIRHeader Header;
    VMRegister Src;
} PACKED OPReturnO;

#define OPFIELDSIZE_ReturnO 1
#define DUMP_ReturnO(OP_1) OP_1(ReturnO, VMRegister, Src)

#define OPCODE_ReturnVoid 20
typedef struct OPReturnVoid {
    LIRHeader Header;
} PACKED OPReturnVoid;

#define OPFIELDSIZE_ReturnVoid 0
#define DUMP_ReturnVoid(OP_0) OP_0(ReturnVoid)

#define OPCODE_CondBrTrue 21
typedef struct OPCondBrTrue {
    LIRHeader Header;
    VMRegister Src;
    Address Block;
} PACKED OPCondBrTrue;

#define OPFIELDSIZE_CondBrTrue 2
#define DUMP_CondBrTrue(OP_2) OP_2(CondBrTrue, VMRegister, Src, Address, Block)

#define OPCODE_CondBrFalse 22
typedef struct OPCondBrFalse {
    LIRHeader Header;
    VMRegister Src;
    Address Block;
} PACKED OPCondBrFalse;

#define OPFIELDSIZE_CondBrFalse 2
#define DUMP_CondBrFalse(OP_2) OP_2(CondBrFalse, VMRegister, Src, Address, Block)

#define OPCODE_Jump 23
typedef struct OPJump {
    LIRHeader Header;
    Address Block;
} PACKED OPJump;

#define OPFIELDSIZE_Jump 1
#define DUMP_Jump(OP_1) OP_1(Jump, Address, Block)

#define OPCODE_Throw 24
typedef struct OPThrow {
    LIRHeader Header;
    VMRegister Src;
    uintptr_t uline;
    uint exception;
    uint fault;
} PACKED OPThrow;

#define OPFIELDSIZE_Throw 4
#define DUMP_Throw(OP_4) OP_4(Throw, VMRegister, Src, uintptr_t, uline, uint, exception, uint, fault)

#define OPCODE_Try 25
typedef struct OPTry {
    LIRHeader Header;
    Address Catch;
    Address Finaly;
} PACKED OPTry;

#define OPFIELDSIZE_Try 2
#define DUMP_Try(OP_2) OP_2(Try, Address, Catch, Address, Finaly)

#define OPCODE_Yield 26
typedef struct OPYield {
    LIRHeader Header;
    VMRegister Src;
} PACKED OPYield;

#define OPFIELDSIZE_Yield 1
#define DUMP_Yield(OP_1) OP_1(Yield, VMRegister, Src)

#define OPCODE_Not 27
typedef struct OPNot {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister Src;
} PACKED OPNot;

#define OPFIELDSIZE_Not 2
#define DUMP_Not(OP_2) OP_2(Not, VMRegister, Dst, VMRegister, Src)

#define OPCODE_Neg 28
typedef struct OPNeg {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister Src;
} PACKED OPNeg;

#define OPFIELDSIZE_Neg 2
#define DUMP_Neg(OP_2) OP_2(Neg, VMRegister, Dst, VMRegister, Src)

#define OPCODE_Add 29
typedef struct OPAdd {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPAdd;

#define OPFIELDSIZE_Add 3
#define DUMP_Add(OP_3) OP_3(Add, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Sub 30
typedef struct OPSub {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPSub;

#define OPFIELDSIZE_Sub 3
#define DUMP_Sub(OP_3) OP_3(Sub, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Mul 31
typedef struct OPMul {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPMul;

#define OPFIELDSIZE_Mul 3
#define DUMP_Mul(OP_3) OP_3(Mul, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Div 32
typedef struct OPDiv {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPDiv;

#define OPFIELDSIZE_Div 3
#define DUMP_Div(OP_3) OP_3(Div, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Mod 33
typedef struct OPMod {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPMod;

#define OPFIELDSIZE_Mod 3
#define DUMP_Mod(OP_3) OP_3(Mod, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_LShift 34
typedef struct OPLShift {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPLShift;

#define OPFIELDSIZE_LShift 3
#define DUMP_LShift(OP_3) OP_3(LShift, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_RShift 35
typedef struct OPRShift {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPRShift;

#define OPFIELDSIZE_RShift 3
#define DUMP_RShift(OP_3) OP_3(RShift, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_And 36
typedef struct OPAnd {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPAnd;

#define OPFIELDSIZE_And 3
#define DUMP_And(OP_3) OP_3(And, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Or 37
typedef struct OPOr {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPOr;

#define OPFIELDSIZE_Or 3
#define DUMP_Or(OP_3) OP_3(Or, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Xor 38
typedef struct OPXor {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPXor;

#define OPFIELDSIZE_Xor 3
#define DUMP_Xor(OP_3) OP_3(Xor, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Eq 39
typedef struct OPEq {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPEq;

#define OPFIELDSIZE_Eq 3
#define DUMP_Eq(OP_3) OP_3(Eq, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Nq 40
typedef struct OPNq {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPNq;

#define OPFIELDSIZE_Nq 3
#define DUMP_Nq(OP_3) OP_3(Nq, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Gt 41
typedef struct OPGt {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPGt;

#define OPFIELDSIZE_Gt 3
#define DUMP_Gt(OP_3) OP_3(Gt, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Ge 42
typedef struct OPGe {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPGe;

#define OPFIELDSIZE_Ge 3
#define DUMP_Ge(OP_3) OP_3(Ge, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Lt 43
typedef struct OPLt {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPLt;

#define OPFIELDSIZE_Lt 3
#define DUMP_Lt(OP_3) OP_3(Lt, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Le 44
typedef struct OPLe {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPLe;

#define OPFIELDSIZE_Le 3
#define DUMP_Le(OP_3) OP_3(Le, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FNeg 45
typedef struct OPFNeg {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister Src;
} PACKED OPFNeg;

#define OPFIELDSIZE_FNeg 2
#define DUMP_FNeg(OP_2) OP_2(FNeg, VMRegister, Dst, VMRegister, Src)

#define OPCODE_FAdd 46
typedef struct OPFAdd {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFAdd;

#define OPFIELDSIZE_FAdd 3
#define DUMP_FAdd(OP_3) OP_3(FAdd, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FSub 47
typedef struct OPFSub {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFSub;

#define OPFIELDSIZE_FSub 3
#define DUMP_FSub(OP_3) OP_3(FSub, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FMul 48
typedef struct OPFMul {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFMul;

#define OPFIELDSIZE_FMul 3
#define DUMP_FMul(OP_3) OP_3(FMul, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FDiv 49
typedef struct OPFDiv {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFDiv;

#define OPFIELDSIZE_FDiv 3
#define DUMP_FDiv(OP_3) OP_3(FDiv, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FEq 50
typedef struct OPFEq {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFEq;

#define OPFIELDSIZE_FEq 3
#define DUMP_FEq(OP_3) OP_3(FEq, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FNq 51
typedef struct OPFNq {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFNq;

#define OPFIELDSIZE_FNq 3
#define DUMP_FNq(OP_3) OP_3(FNq, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FGt 52
typedef struct OPFGt {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFGt;

#define OPFIELDSIZE_FGt 3
#define DUMP_FGt(OP_3) OP_3(FGt, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FGe 53
typedef struct OPFGe {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFGe;

#define OPFIELDSIZE_FGe 3
#define DUMP_FGe(OP_3) OP_3(FGe, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FLt 54
typedef struct OPFLt {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFLt;

#define OPFIELDSIZE_FLt 3
#define DUMP_FLt(OP_3) OP_3(FLt, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_FLe 55
typedef struct OPFLe {
    LIRHeader Header;
    VMRegister Dst;
    VMRegister LHS;
    VMRegister RHS;
} PACKED OPFLe;

#define OPFIELDSIZE_FLe 3
#define DUMP_FLe(OP_3) OP_3(FLe, VMRegister, Dst, VMRegister, LHS, VMRegister, RHS)

#define OPCODE_Nop 56
typedef struct OPNop {
    LIRHeader Header;
} PACKED OPNop;

#define OPFIELDSIZE_Nop 0
#define DUMP_Nop(OP_0) OP_0(Nop)

#define BYTECODE_LIST(OP)\
    OP(ThreadedCode)\
    OP(Prologue)\
    OP(LoadConstant)\
    OP(LoadArgumentI)\
    OP(LoadArgumentO)\
    OP(LoadLocal)\
    OP(LoadField)\
    OP(StoreLocal)\
    OP(StoreField)\
    OP(New)\
    OP(Call)\
    OP(VCall)\
    OP(PushI)\
    OP(PushO)\
    OP(PopI)\
    OP(PopO)\
    OP(Func)\
    OP(Test)\
    OP(ReturnI)\
    OP(ReturnO)\
    OP(ReturnVoid)\
    OP(CondBrTrue)\
    OP(CondBrFalse)\
    OP(Jump)\
    OP(Throw)\
    OP(Try)\
    OP(Yield)\
    OP(Not)\
    OP(Neg)\
    OP(Add)\
    OP(Sub)\
    OP(Mul)\
    OP(Div)\
    OP(Mod)\
    OP(LShift)\
    OP(RShift)\
    OP(And)\
    OP(Or)\
    OP(Xor)\
    OP(Eq)\
    OP(Nq)\
    OP(Gt)\
    OP(Ge)\
    OP(Lt)\
    OP(Le)\
    OP(FNeg)\
    OP(FAdd)\
    OP(FSub)\
    OP(FMul)\
    OP(FDiv)\
    OP(FEq)\
    OP(FNq)\
    OP(FGt)\
    OP(FGe)\
    OP(FLt)\
    OP(FLe)\
    OP(Nop)

#endif /* end of include guard */