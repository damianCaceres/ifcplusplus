
#pragma once
#include <ifcpp/model/BasicTypes.h>
#include <ifcpp/model/BuildingModel.h>
#include <ifcpp/model/BuildingObject.h>

class STEPToolBar : public CMFCToolBar
{
public:
	virtual void OnUpdateCmdUI(CFrameWnd* /*pTarget*/, BOOL bDisableIfNoHndler)
	{
		CMFCToolBar::OnUpdateCmdUI((CFrameWnd*) GetOwner(), bDisableIfNoHndler);
	}

	virtual BOOL AllowShowOnList() const { return FALSE; }
};

class MyPropertyGridCtrl : public CMFCPropertyGridCtrl
{
public:
	MyPropertyGridCtrl();

	virtual int OnDrawProperty( CDC * pDC, CMFCPropertyGridProperty* pProp ) const
	{
		pDC->SetTextColor( RGB( 20, 20, 20 ) );
		return CMFCPropertyGridCtrl::OnDrawProperty( pDC, pProp );
	}

protected:
	afx_msg void OnLButtonDown( UINT nFlags, CPoint point );

	DECLARE_MESSAGE_MAP()
};

