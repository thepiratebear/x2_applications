/*!
 * -------------------------------------------
 * Copyright (c) 2019, Horizon Robotics, Inc.
 * All rights reserved.
 * \File     flowmsg.h
 * \Author   Yingmin Li
 * \Mail     yingmin.li@horizon.ai
 * \Version  1.0.0.0
 * \Date     2019-04-17
 * \Brief    implement of flowmsg.h
 * \DO NOT MODIFY THIS COMMENT, \
 * \WHICH IS AUTO GENERATED BY EDITOR
 * -------------------------------------------
 */

#ifndef XPLUGINFLOW_INCLUDE_XPLUGINFLOW_MESSAGE_PLUGINFLOW_FLOWMSG_H_
#define XPLUGINFLOW_INCLUDE_XPLUGINFLOW_MESSAGE_PLUGINFLOW_FLOWMSG_H_
#include <memory>
namespace horizon {
namespace vision {
namespace xpluginflow {
/**
 * @brief error code
 */
enum XPluginErrorCode {
  ERROR_CODE_OK = 0,
  ERROR_CODE_HBIPC_UNINIT,
  ERROR_CODE_XIC_UNINIT
};

/**
 * @brief flow message: the base msg
 */
struct XPluginFlowMessage
    : public std::enable_shared_from_this<XPluginFlowMessage> {
  XPluginFlowMessage &operator=(const XPluginFlowMessage &) = delete;
  virtual ~XPluginFlowMessage() = default;

  std::string type_ = "NONE";

  std::string param_ = "";

  std::string type() const {
    return type_;
  }

  virtual std::string Serialize() = 0;
};

using XPluginFlowMessagePtr = std::shared_ptr<XPluginFlowMessage>;
}  // namespace xpluginflow
}  // namespace vision
}  // namespace horizon

#endif  // XPLUGINFLOW_INCLUDE_XPLUGINFLOW_MESSAGE_PLUGINFLOW_FLOWMSG_H_