//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#include <MuQt5/qtUtils.h>
#include <MuQt5/QPaintEventType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt5/QRectType.h>
#include <MuQt5/QRegionType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu
{
    using namespace std;

    QPaintEventType::QPaintEventType(Context* c, const char* name, Class* super)
        : Class(c, name, super)
    {
    }

    QPaintEventType::~QPaintEventType() {}

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    Pointer qt_QPaintEvent_QPaintEvent_QPaintEvent_QPaintEvent_QRegion(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_paintRegion)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QRegion arg1 = getqtype<QRegionType>(param_paintRegion);
        setqpointer<QPaintEventType>(param_this, new QPaintEvent(arg1));
        return param_this;
    }

    Pointer qt_QPaintEvent_QPaintEvent_QPaintEvent_QPaintEvent_QRect(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_paintRect)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QRect arg1 = getqtype<QRectType>(param_paintRect);
        setqpointer<QPaintEventType>(param_this, new QPaintEvent(arg1));
        return param_this;
    }

    Pointer qt_QPaintEvent_rect_QRect_QPaintEvent(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QPaintEvent* arg0 = getqpointer<QPaintEventType>(param_this);
        return makeqtype<QRectType>(c, arg0->rect(), "qt.QRect");
    }

    Pointer qt_QPaintEvent_region_QRegion_QPaintEvent(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QPaintEvent* arg0 = getqpointer<QPaintEventType>(param_this);
        return makeqtype<QRegionType>(c, arg0->region(), "qt.QRegion");
    }

    static NODE_IMPLEMENTATION(_n_QPaintEvent0, Pointer)
    {
        NODE_RETURN(qt_QPaintEvent_QPaintEvent_QPaintEvent_QPaintEvent_QRegion(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QPaintEvent1, Pointer)
    {
        NODE_RETURN(qt_QPaintEvent_QPaintEvent_QPaintEvent_QPaintEvent_QRect(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_rect0, Pointer)
    {
        NODE_RETURN(qt_QPaintEvent_rect_QRect_QPaintEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_region0, Pointer)
    {
        NODE_RETURN(qt_QPaintEvent_region_QRegion_QPaintEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    void QPaintEventType::load()
    {
        USING_MU_FUNCTION_SYMBOLS;
        MuLangContext* c = static_cast<MuLangContext*>(context());
        Module* global = globalModule();

        const string typeName = name();
        const string refTypeName = typeName + "&";
        const string fullTypeName = fullyQualifiedName();
        const string fullRefTypeName = fullTypeName + "&";
        const char* tn = typeName.c_str();
        const char* ftn = fullTypeName.c_str();
        const char* rtn = refTypeName.c_str();
        const char* frtn = fullRefTypeName.c_str();

        scope()->addSymbols(new ReferenceType(c, rtn, this),

                            new Function(c, tn, BaseFunctions::dereference,
                                         Cast, Return, ftn, Args, frtn, End),

                            EndArguments);

        addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate,
                                None, Return, ftn, End),

                   new MemberVariable(c, "native", "qt.NativeObject"),

                   EndArguments);

        addSymbols(EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(
                c, "QPaintEvent", _n_QPaintEvent0, None, Compiled,
                qt_QPaintEvent_QPaintEvent_QPaintEvent_QPaintEvent_QRegion,
                Return, "qt.QPaintEvent", Parameters,
                new Param(c, "this", "qt.QPaintEvent"),
                new Param(c, "paintRegion", "qt.QRegion"), End),
            new Function(
                c, "QPaintEvent", _n_QPaintEvent1, None, Compiled,
                qt_QPaintEvent_QPaintEvent_QPaintEvent_QPaintEvent_QRect,
                Return, "qt.QPaintEvent", Parameters,
                new Param(c, "this", "qt.QPaintEvent"),
                new Param(c, "paintRect", "qt.QRect"), End),
            new Function(c, "rect", _n_rect0, None, Compiled,
                         qt_QPaintEvent_rect_QRect_QPaintEvent, Return,
                         "qt.QRect", Parameters,
                         new Param(c, "this", "qt.QPaintEvent"), End),
            new Function(c, "region", _n_region0, None, Compiled,
                         qt_QPaintEvent_region_QRegion_QPaintEvent, Return,
                         "qt.QRegion", Parameters,
                         new Param(c, "this", "qt.QPaintEvent"), End),
            // static functions
            EndArguments);
        globalScope()->addSymbols(EndArguments);
        scope()->addSymbols(EndArguments);
    }

} // namespace Mu
