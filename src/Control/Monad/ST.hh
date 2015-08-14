///////////////////////////////////////////////////////////////////////////////
//
// Module      :  ST.hh
// Copyright   :  (c) Andy Arvanitis 2015
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// ST FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef STFFI_HH
#define STFFI_HH

#include "PureScript/PureScript.hh"

namespace Control_Monad_ST {
  using namespace PureScript;

  // exports.newSTRef = function (val) {
  //   return function () {
  //     return { value: val };
  //   };
  // };
  //
  // exports.readSTRef = function (ref) {
  //   return function () {
  //     return ref.value;
  //   };
  // };
  //
  // exports.modifySTRef = function (ref) {
  //   return function (f) {
  //     return function () {
  //       /* jshint boss: true */
  //       return ref.value = f(ref.value);
  //     };
  //   };
  // };
  //
  // exports.writeSTRef = function (ref) {
  //   return function (a) {
  //     return function () {
  //       /* jshint boss: true */
  //       return ref.value = a;
  //     };
  //   };
  // };

  template <typename A>
  inline auto runST(const eff_fn<A>& f) -> eff_fn<A> {
    return f;
  }

}


#endif // STFFI_HH
