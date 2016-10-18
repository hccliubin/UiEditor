#pragma once


#include "propgrid\SPropertyGrid.h"

namespace SOUI
{
	class SPropertyGridEx : public SPropertyGrid
	{
		SOUI_CLASS_NAME(SPropertyGridEx, L"propgridex");



	public:
		SPropertyGridEx(void);
		~SPropertyGridEx(void);


		virtual void DrawItem(IRenderTarget *pRT, CRect &rc, int iItem);
        virtual void OnInplaceActiveWndCreate(IPropertyItem *pItem,SWindow *pWnd,pugi::xml_node xmlInit);
	
	protected:
		COLORREF m_crGroup;       //Group������ɫ
		COLORREF m_crItem;        //Item������ɫ
		COLORREF m_crItemText;    //Item�ı���ɫ
		COLORREF m_crItemSel;     //Itemѡ��ʱ�ı���ɫ
		SStringT m_strEditBkgndColor; //edit�ı���ɫ;
		SStringT m_strEditTextColor; //edit���ı���ɫ;
		COLORREF m_crBorder;      //�߿���ɫ
		SStringT    m_strEnableAutoWordSel;    /**< enable Word style auto word selection?  */

		SOUI_ATTRS_BEGIN()
			//ATTR_INT(L"itemHeight", m_nItemHei, FALSE)
			//ATTR_SKIN(L"itemSkin", m_pItemSkin, TRUE)
			//ATTR_SKIN(L"iconSkin", m_pIconSkin, TRUE)
			//ATTR_COLOR(L"colorItemBkgnd",m_crItemBg,FALSE)
			//ATTR_COLOR(L"colorItemBkgnd2", m_crItemBg2, FALSE)
			//ATTR_COLOR(L"colorItemSelBkgnd",m_crItemSelBg,FALSE)
			//ATTR_COLOR(L"colorItemHotBkgnd",m_crItemHotBg,FALSE)
			//ATTR_COLOR(L"colorText",m_crText,FALSE)
			ATTR_COLOR(L"ColorGroup",m_crGroup,FALSE)
			ATTR_COLOR(L"ColorItem",m_crItem,FALSE)
			ATTR_COLOR(L"ColorItemText",m_crItemText,FALSE)
			ATTR_COLOR(L"ColorItemText",m_crItemText,FALSE)
			ATTR_COLOR(L"ColorItemSel",m_crItemSel,FALSE)
			ATTR_STRINGT(L"EditBkgndColor",m_strEditBkgndColor,FALSE)
			ATTR_STRINGT(L"EditTextColor",m_strEditTextColor,FALSE)
			ATTR_COLOR(L"ColorBorder",m_crBorder,FALSE)
            ATTR_STRINGT(L"autoWordSel",m_strEnableAutoWordSel,FALSE)
			//ATTR_INT(L"icon-x", m_ptIcon.x, FALSE)
			//ATTR_INT(L"icon-y", m_ptIcon.y, FALSE)
			//ATTR_INT(L"text-x", m_ptText.x, FALSE)
			//ATTR_INT(L"text-y", m_ptText.y, FALSE)
			//ATTR_INT(L"hotTrack",m_bHotTrack,FALSE)
			SOUI_ATTRS_END()

		//	const COLORREF KColorHead  = RGBA(128,128,128,255);   //ͷ����ɫ             ��ɫ
		//const COLORREF KColorGroup = RGBA(128,128,128,255);   //�����ɫ             ��ɫ
		//const COLORREF KColorItem  = RGBA(255,255,255,255);   //δѡ�е���ɫ         ��ɫ
		//const COLORREF KColorItemSel  = RGBA(0,0,128,255);    //ѡ��ʱitem����ɫ     ����
		//const COLORREF KColorBorder = RGBA(0,0,0,255);        //�߿���ɫ             ��ɫ




	};

}