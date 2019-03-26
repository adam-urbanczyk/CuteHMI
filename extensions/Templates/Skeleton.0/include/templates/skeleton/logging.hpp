#ifndef H_EXTENSIONS_TEMPLATES_SKELETON_0_INCLUDE_TEMPLATES_SKELETON_LOGGING_HPP
#define H_EXTENSIONS_TEMPLATES_SKELETON_0_INCLUDE_TEMPLATES_SKELETON_LOGGING_HPP

// This file has been autogenerated by 'ExtensionSkeleton.qbs'.

#include "internal/platform.hpp"
#include <cutehmi/loggingMacros.hpp>

TEMPLATES_SKELETON_API Q_DECLARE_LOGGING_CATEGORY(templates_skeleton_0_loggingCategory)

namespace templates {
namespace skeleton {

inline
const QLoggingCategory & loggingCategory()
{
	return templates_skeleton_0_loggingCategory();
}

}
}

#endif
