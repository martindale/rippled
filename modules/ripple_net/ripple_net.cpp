//------------------------------------------------------------------------------
/*
    Copyright (c) 2011-2013, OpenCoin, Inc.
*/
//==============================================================================

/** Add this to get the @ref ripple_net module.

    @file ripple_net.cpp
    @ingroup ripple_net
*/

#include "BeastConfig.h"

#include "beast/modules/beast_core/beast_core.h" // Must come before <boost/bind.hpp>

#include <boost/version.hpp>
#include <boost/asio/io_service.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/asio.hpp>
#include <boost/make_shared.hpp>
#include <boost/bind.hpp>
#include <boost/array.hpp>
#include <boost/foreach.hpp>
#include <boost/unordered_map.hpp> // for unit test
#include <boost/mpl/at.hpp>
#include <boost/mpl/vector.hpp>

#include "beast/modules/beast_asio/beast_asio.h"

#include "ripple_net.h"

// VFALCO TODO Remove this dependency on theConfig
#include "../modules/ripple_core/ripple_core.h" // theConfig for HttpsClient

namespace ripple
{

#include "basics/impl/MultiSocketType.h"

#include "basics/RippleSSLContext.cpp"
#include "basics/MultiSocket.cpp"
#include "basics/HTTPRequest.cpp"
#include "basics/HTTPClient.cpp"
#include "basics/RPCDoor.cpp"
#include "basics/RPCServer.cpp"
#include "basics/SNTPClient.cpp"

}
