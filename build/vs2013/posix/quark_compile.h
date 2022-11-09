#ifndef QUARK_COMPILE_H
#define QUARK_COMPILE_H 1
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef __QUARK_LIBC__
#define __QUARK_LIBC__
#endif

#if defined(_M_IX86)
#define _i386_
#endif

#if defined(_M_AMD64)
#define __amd64__
#define _AMD64_
#endif

#if defined(_M_X64)
#define __x86_64__
#endif

//#define_ GNUC_
//#define_ STDC_ VERSION_ 1 99409L
//#define_ STDC_ VERSION_ 199901L
#define __asm__  __asm

#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif

#ifndef __cplusplus
typedef unsigned int size_ t;
typedef unsigned short wchar_ t;
typedefint ssize_ t;
#endif

#ifdef __cplusplus
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS }
#else
#define __BEGIN_DECLS
#define __END_DECLS
#endif

#ifndef QUARK_IMPORT
#define QUARK_IMPORT __declspec(dllimport)
#endif

#ifndef QUARK_EXPORT
#define QUARK_EXPORT __declspec(dllexport)
#endif

#ifndef QUARK_LINKAGE
//���������ڵ�������⣬�����Ǳ���ʵ�֣���������Ҫ�ṩ�ӿڵĺ���
#define QUARK_LINKAGE QUARK_IMPORT
#endif

#ifdef QKC_EXPORTS
#define QKCAPI QUARK_EXPORT
#else
#define QKCAPI QUARK_IMPORT
#endif

#ifdef QKN_EXPORTS
#define QKNAPI QUARK_EXPORT
#else
#define QKNAPI QUARK_IMPORT
#endif
#endif //QUARK_COMPILE_H




