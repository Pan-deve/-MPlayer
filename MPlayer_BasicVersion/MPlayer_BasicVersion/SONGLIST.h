#pragma once
#include"TabSheet.h"

// SONGLIST 对话框

class SONGLIST : public CDialogEx
{
	DECLARE_DYNAMIC(SONGLIST);

public:
	SONGLIST(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SONGLIST();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SONGLIST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTabSheet songtab;
};
