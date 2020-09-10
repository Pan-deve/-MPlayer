// SONGLIST.cpp: 实现文件
//

#include "pch.h"
#include "MPlayer_BasicVersion.h"
#include "SONGLIST.h"
#include "afxdialogex.h"


// SONGLIST 对话框

IMPLEMENT_DYNAMIC(SONGLIST, CDialogEx)

SONGLIST::SONGLIST(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SONGLIST, pParent)
{

}

SONGLIST::~SONGLIST()
{
}

void SONGLIST::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDD_SONGTAB, songtab);
}


BEGIN_MESSAGE_MAP(SONGLIST, CDialogEx)
END_MESSAGE_MAP()


// SONGLIST 消息处理程序

