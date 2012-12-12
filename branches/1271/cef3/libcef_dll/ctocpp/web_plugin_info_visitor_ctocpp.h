// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_WEB_PLUGIN_INFO_VISITOR_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_WEB_PLUGIN_INFO_VISITOR_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_web_plugin.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefWebPluginInfoVisitorCToCpp
    : public CefCToCpp<CefWebPluginInfoVisitorCToCpp, CefWebPluginInfoVisitor,
        cef_web_plugin_info_visitor_t> {
 public:
  explicit CefWebPluginInfoVisitorCToCpp(cef_web_plugin_info_visitor_t* str)
      : CefCToCpp<CefWebPluginInfoVisitorCToCpp, CefWebPluginInfoVisitor,
          cef_web_plugin_info_visitor_t>(str) {}
  virtual ~CefWebPluginInfoVisitorCToCpp() {}

  // CefWebPluginInfoVisitor methods
  virtual bool Visit(CefRefPtr<CefWebPluginInfo> info, int count,
      int total) OVERRIDE;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_WEB_PLUGIN_INFO_VISITOR_CTOCPP_H_
