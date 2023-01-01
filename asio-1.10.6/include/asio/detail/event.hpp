//
// detail/event.hpp
// ~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2015 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_DETAIL_EVENT_HPP
#define ASIO_DETAIL_EVENT_HPP


#include "asio/detail/config.hpp"

#if   defined(ASIO_HAS_PTHREADS)
# include "asio/detail/posix_event.hpp"
#else
# include "asio/detail/std_event.hpp"
#endif

namespace asio {
namespace detail {

#if   defined(ASIO_HAS_PTHREADS)
typedef posix_event event;
#else
typedef std_event event;
#endif

} // namespace detail
} // namespace asio

#endif // ASIO_DETAIL_EVENT_HPP
