
#ifndef __WIN32K_REGION_H
#define __WIN32K_REGION_H

#include <win32k/gdiobj.h>

#define  RGNDATA_FreeRgn(hRgn)  GDIOBJ_FreeObj((HGDIOBJ)hRgn, GO_REGION_MAGIC)
#define  RGNDATA_LockRgn(hRgn) ((PRGNDATA)GDIOBJ_LockObj((HGDIOBJ)hRgn, GO_REGION_MAGIC))
#define  RGNDATA_UnlockRgn(hRgn) GDIOBJ_UnlockObj((HGDIOBJ)hRgn, GO_REGION_MAGIC)
HRGN RGNDATA_AllocRgn(INT n);

BOOL RGNDATA_InternalDelete( PRGNDATA Obj );

/*  User entry points */
HRGN STDCALL
W32kUnionRectWithRgn(HRGN hDest, const RECT* Rect);

INT
STDCALL
W32kCombineRgn(HRGN  hDest,
                    HRGN  hSrc1,
                    HRGN  hSrc2,
                    INT  CombineMode);

HRGN
STDCALL
W32kCreateEllipticRgn(INT  LeftRect,
                            INT  TopRect,
                            INT  RightRect,
                            INT  BottomRect);

HRGN
STDCALL
W32kCreateEllipticRgnIndirect(CONST PRECT  rc);

HRGN
STDCALL
W32kCreatePolygonRgn(CONST PPOINT  pt,
                           INT  Count,
                           INT  PolyFillMode);

HRGN
STDCALL
W32kCreatePolyPolygonRgn(CONST PPOINT  pt,
                               CONST PINT  PolyCounts,
                               INT  Count,
                               INT  PolyFillMode);

HRGN
STDCALL
W32kCreateRectRgn(INT  LeftRect,
                        INT  TopRect,
                        INT  RightRect,
                        INT  BottomRect);

HRGN
STDCALL
W32kCreateRectRgnIndirect(CONST PRECT  rc);

HRGN
STDCALL
W32kCreateRoundRectRgn(INT  LeftRect,
                             INT  TopRect,
                             INT  RightRect,
                             INT  BottomRect,
                             INT  WidthEllipse,
                             INT  HeightEllipse);

BOOL
STDCALL
W32kEqualRgn(HRGN  hSrcRgn1,
                   HRGN  hSrcRgn2);

HRGN
STDCALL
W32kExtCreateRegion(CONST PXFORM  Xform,
                          DWORD  Count,
                          CONST PRGNDATA  RgnData);

BOOL
STDCALL
W32kFillRgn(HDC  hDC,
                  HRGN  hRgn,
                  HBRUSH  hBrush);

BOOL
STDCALL
W32kFrameRgn(HDC  hDC,
                   HRGN  hRgn,
                   HBRUSH  hBrush,
                   INT  Width,
                   INT  Height);

INT
STDCALL
W32kGetRgnBox(HRGN  hRgn,
                   LPRECT  Rect);

BOOL
STDCALL
W32kInvertRgn(HDC  hDC,
                    HRGN  hRgn);

INT
STDCALL
W32kOffsetRgn(HRGN  hRgn,
                   INT  XOffset,
                   INT  YOffset);

BOOL
STDCALL
W32kPaintRgn(HDC  hDC,
                   HRGN  hRgn);

BOOL
STDCALL
W32kPtInRegion(HRGN  hRgn,
                     INT  X,
                     INT  Y);

BOOL
STDCALL
W32kRectInRegion(HRGN  hRgn,
                       CONST LPRECT  rc);

BOOL
STDCALL
W32kSetRectRgn(HRGN  hRgn,
                     INT  LeftRect,
                     INT  TopRect,
                     INT  RightRect,
                     INT  BottomRect);

#endif

