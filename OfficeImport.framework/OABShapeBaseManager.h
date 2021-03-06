/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager> {
    struct EshShapeBase { int (**x1)(); unsigned short x2; struct EshContentData { 
            struct EshOpt { 
                int (**_vptr$EshObject)(); 
                unsigned short m_unType; 
                struct EshHeader { 
                    int m_lLength; 
                    unsigned int m_ulOffset; 
                    short m_nInstance; 
                    unsigned short m_unType; 
                    unsigned char m_bVersion; 
                } m_header; 
                struct ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> > { 
                    struct map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { 
                        struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { 
                            struct _Rb_tree_impl<CsLess<long unsigned int>,false> { 
                                struct CsLess<long unsigned int> { } _M_key_compare; 
                                struct _Rb_tree_node_base { 
                                    int _M_color; 
                                    struct _Rb_tree_node_base {} *_M_parent; 
                                    struct _Rb_tree_node_base {} *_M_left; 
                                    struct _Rb_tree_node_base {} *_M_right; 
                                } _M_header; 
                                unsigned int _M_node_count; 
                            } _M_impl; 
                        } _M_t; 
                    } m_map; 
                } m_data; 
                struct EshColor { 
                    struct Data { 
                        int m_type; 
                        union Value { 
                            struct RGB { 
                                unsigned char m_bRed; 
                                unsigned char m_bGreen; 
                                unsigned char m_bBlue; 
                            } m_rgb; 
                            unsigned short m_schemeIndex; 
                            unsigned short m_paletteIndex; 
                            struct AdjustedColor { 
                                unsigned char m_refColor; 
                                unsigned char m_bParam; 
                                unsigned int m_adjust : 4; 
                                unsigned int m_isInvert : 1; 
                                unsigned int m_isInvert128 : 1; 
                                unsigned int m_isGray : 1; 
                            } m_adjustedColor; 
                        } m_value; 
                    } m_data; 
                } m_color; 
            } m_optB; 
            struct EshOpt { 
                int (**_vptr$EshObject)(); 
                unsigned short m_unType; 
                struct EshHeader { 
                    int m_lLength; 
                    unsigned int m_ulOffset; 
                    short m_nInstance; 
                    unsigned short m_unType; 
                    unsigned char m_bVersion; 
                } m_header; 
                struct ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> > { 
                    struct map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { 
                        struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { 
                            struct _Rb_tree_impl<CsLess<long unsigned int>,false> { 
                                struct CsLess<long unsigned int> { } _M_key_compare; 
                                struct _Rb_tree_node_base { 
                                    int _M_color; 
                                    struct _Rb_tree_node_base {} *_M_parent; 
                                    struct _Rb_tree_node_base {} *_M_left; 
                                    struct _Rb_tree_node_base {} *_M_right; 
                                } _M_header; 
                                unsigned int _M_node_count; 
                            } _M_impl; 
                        } _M_t; 
                    } m_map; 
                } m_data; 
                struct EshColor { 
                    struct Data { 
                        int m_type; 
                        union Value { 
                            struct RGB { 
                                unsigned char m_bRed; 
                                unsigned char m_bGreen; 
                                unsigned char m_bBlue; 
                            } m_rgb; 
                            unsigned short m_schemeIndex; 
                            unsigned short m_paletteIndex; 
                            struct AdjustedColor { 
                                unsigned char m_refColor; 
                                unsigned char m_bParam; 
                                unsigned int m_adjust : 4; 
                                unsigned int m_isInvert : 1; 
                                unsigned int m_isInvert128 : 1; 
                                unsigned int m_isGray : 1; 
                            } m_adjustedColor; 
                        } m_value; 
                    } m_data; 
                } m_color; 
            } m_optX; 
            struct EshSp { 
                int (**_vptr$EshObject)(); 
                unsigned short m_unType; 
                struct EshHeader { 
                    int m_lLength; 
                    unsigned int m_ulOffset; 
                    short m_nInstance; 
                    unsigned short m_unType; 
                    unsigned char m_bVersion; 
                } m_header; 
                unsigned int m_ulSpid; 
                boolm_isGroup; 
                boolm_isChild; 
                boolm_isPatriarch; 
                boolm_isDeleted; 
                boolm_isOleShape; 
                boolm_isHaveMaster; 
                boolm_isFlipH; 
                boolm_isFlipV; 
                boolm_isConnector; 
                boolm_isHaveAnchor; 
                boolm_isBackground; 
                boolm_isHaveSpt; 
            } m_sp; 
            struct CsRect<long int> { 
                long m_data[4]; 
            } m_anchor; 
        } x3; struct EshTextBox { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x4; struct EshFill { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x5; struct EshStroke { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x6; struct EshShadow { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x7; struct EshExtrusion { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x8; struct EshCallout { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x9; } *mShapeBase;
}


- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })shadowColor;
- (void)dealloc;
- (id)initWithShapeBase:(struct EshShapeBase { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> > { struct map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> > { struct map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshSp { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; unsigned int x_3_2_4; boolx_3_2_5; boolx_3_2_6; boolx_3_2_7; boolx_3_2_8; boolx_3_2_9; boolx_3_2_10; boolx_3_2_11; boolx_3_2_12; boolx_3_2_13; boolx_3_2_14; boolx_3_2_15; boolx_3_2_16; } x_3_1_3; struct CsRect<long int> { long x_4_2_1[4]; } x_3_1_4; } x3; struct EshTextBox { int (**x_4_1_1)(); unsigned short x_4_1_2; struct EshContentData {} *x_4_1_3; } x4; struct EshFill { int (**x_5_1_1)(); unsigned short x_5_1_2; struct EshContentData {} *x_5_1_3; } x5; struct EshStroke { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; } x6; struct EshShadow { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshExtrusion { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; struct EshCallout { int (**x_9_1_1)(); unsigned short x_9_1_2; struct EshContentData {} *x_9_1_3; } x9; }*)arg1 shapeType:(int)arg2 masterShape:(struct EshShape { }*)arg3;
- (unsigned long)strokeFillBlipID;
- (id)strokeFillBlipName;
- (int)strokePresetDash;
- (const struct EshTablePropVal<long int> { int (**x1)(); struct ChVector<long int> { long *x_2_1_1; long *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)strokeCustomDash;
- (long)shadowOffsetX;
- (long)shadowOffsetY;
- (long)shadowSoftness;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (long)strokeFgAlpha;
- (BOOL)isStroked;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })strokeFgColor;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })strokeBgColor;
- (int)strokeFillType;
- (long)strokeMiterLimit;
- (int)strokeCompoundType;
- (int)strokeCapStyle;
- (int)strokeJoinStyle;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowLength;
- (int)strokeEndArrowLength;
- (int)shadowType;
- (long)shadowAlpha;
- (BOOL)isShadowed;
- (long)strokeWidth;

@end
