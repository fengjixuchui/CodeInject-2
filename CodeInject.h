#pragma once
#include <Windows.h>
#include<TlHelp32.h>
#include <stdio.h>

#define DEBUG 1

#define INIT_CODEBUFFER(s) { sizeof(s), s }

typedef struct _CodeBuffer
{
	SIZE_T BufferSize;
	BYTE* pBuffer;

}CodeBuffer;

class CodeInject
{
public:

	//Զ�߳�ע��
	static BOOL ZwCreateThreadExCodeInject(DWORD dwPid, CodeBuffer Buffer);
	//ͨ������ʽ�������̣�HOOK������ڵ�ִ��ShellCode
	static BOOL CreateProcessCodeInject(const WCHAR* pszTarget, CodeBuffer Buffer);
	//APCע��
	static BOOL QueueUserAPCCodeInject(DWORD dwPid, CodeBuffer Buffer);

};


