
// CPORTDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CCPORTDlg ��ȭ ����
class CCPORTDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CCPORTDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CPORT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonPort();
	CComboBox m_comboPort;

public:
	//GetSerialPort
	int GetSerialPort(CStringList& list);

};
