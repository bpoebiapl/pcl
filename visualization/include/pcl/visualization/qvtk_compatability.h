/*
 * SPDX-License-Identifier: BSD-3-Clause
 *
 *  Point Cloud Library (PCL) - www.pointclouds.org
 *  Copyright (c) 2020-, Open Perception
 *
 *  All rights reserved
 */
#include <pcl/pcl_config.h>

#if HAVE_QVTK
  #include <vtkVersion.h>

  #if VTK_MAJOR_VERSION > 8
    #include <QVTKOpenGLNativeWidget.h>
    using PCLQVTKWidget = QVTKOpenGLNativeWidget;
  #else
    #include <QVTKWidget.h>
    using PCLQVTKWidget = QVTKWidget;
  #endif

#else
  #error PCL is not compiled with QVTK.
#endif
