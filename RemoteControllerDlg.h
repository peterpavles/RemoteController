
// RemoteControllerDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "AppListCtrl.h"
#include "socket\SocketServer.h"


extern CSocketServer *g_pSocket;

extern const int g_Width[COLUMNS];

// CRemoteControllerDlg �Ի���
class CRemoteControllerDlg : public CDialogEx
{
// ����
public:
	CRemoteControllerDlg(CWnd* pParent = NULL);	// ��׼���캯��

	~CRemoteControllerDlg();

	// �Ի�������
	enum { IDD = IDD_REMOTECONTROLLER_DIALOG };

	char m_strIp[64];			// ����IP
	int m_nPort;				// Ip�˿�
	char m_strConf[_MAX_PATH];	// �����ļ�
	bool m_bAdvanced;			// ���ø߼�����
	CSocketServer *m_pServer;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CAppListCtrl m_ListApps;
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnQuitApp();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnRefreshAll();
	afx_msg void OnPoweroffAll();
	afx_msg void OnIpconfig();
	afx_msg void OnAppAbout();
	afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
	afx_msg void OnUpdatePoweroffAll(CCmdUI *pCmdUI);
	afx_msg void OnRebootSystem();
	afx_msg void OnUpdateRebootSystem(CCmdUI *pCmdUI);
	afx_msg void OnUpdateRefreshAll(CCmdUI *pCmdUI);
};