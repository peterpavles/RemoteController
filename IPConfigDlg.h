#pragma once
#include "afxwin.h"


// CIPConfigDlg �Ի���

class CIPConfigDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CIPConfigDlg)

public:
	CIPConfigDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CIPConfigDlg();

// �Ի�������
	enum { IDD = IDD_IPCONFIG_DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_IpAddr;
	CEdit m_Port;
	CString m_strIpAddr;
	int m_nPort;
};