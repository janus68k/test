#pragma once

class CTrickDlg : public CDialogEx
{
public:
	CTrickDlg(CWnd* pParent = nullptr);	// 標準コンストラクター

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TRICK_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート

protected:
	HICON m_hIcon;
	UINT_PTR m_timer;
	int m_dir;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
