#ifndef CEPH_RBD_FEATURES_H
#define CEPH_RBD_FEATURES_H

#define RBD_FEATURE_LAYERING      (1<<0)
#define RBD_FEATURE_STRIPINGV2    (1<<1)

#define RBD_FEATURES_INCOMPATIBLE (RBD_FEATURE_LAYERING|RBD_FEATURE_STRIPINGV2)
#define RBD_FEATURES_ALL          (RBD_FEATURE_LAYERING|RBD_FEATURE_STRIPINGV2)

#endif
