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

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/ctocpp/print_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefPrintHandlerCToCpp::GetPrintOptions(CefRefPtr<CefBrowser> browser,
    CefPrintOptions& printOptions) {
  if (CEF_MEMBER_MISSING(struct_, get_print_options))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = struct_->get_print_options(struct_,
      CefBrowserCppToC::Wrap(browser),
      &printOptions);

  // Return type: bool
  return _retval?true:false;
}

bool CefPrintHandlerCToCpp::GetPrintHeaderFooter(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, const CefPrintInfo& printInfo,
    const CefString& url, const CefString& title, int currentPage,
    int maxPages, CefString& topLeft, CefString& topCenter,
    CefString& topRight, CefString& bottomLeft, CefString& bottomCenter,
    CefString& bottomRight) {
  if (CEF_MEMBER_MISSING(struct_, get_print_header_footer))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return false;
  // Verify param: title; type: string_byref_const
  DCHECK(!title.empty());
  if (title.empty())
    return false;

  // Execute
  int _retval = struct_->get_print_header_footer(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      &printInfo,
      url.GetStruct(),
      title.GetStruct(),
      currentPage,
      maxPages,
      topLeft.GetWritableStruct(),
      topCenter.GetWritableStruct(),
      topRight.GetWritableStruct(),
      bottomLeft.GetWritableStruct(),
      bottomCenter.GetWritableStruct(),
      bottomRight.GetWritableStruct());

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefPrintHandlerCToCpp, CefPrintHandler,
    cef_print_handler_t>::DebugObjCt = 0;
#endif
