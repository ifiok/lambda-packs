#pragma once

// @generated by aten/src/ATen/gen.py

#include "ATen/CPUTypeDefault.h"
#include "ATen/Context.h"
#include "ATen/CheckGenerator.h"



#ifdef _MSC_VER
#ifdef Type
#undef Type
#endif
#endif

namespace at {

struct CPUHalfType final : public CPUTypeDefault {
  explicit CPUHalfType();
  virtual ScalarType scalarType() const override;
  virtual caffe2::TypeMeta typeMeta() const override;
  virtual Backend backend() const override;
  virtual const char * toString() const override;
  virtual size_t elementSizeInBytes() const override;
  virtual TypeID ID() const override;

  // example
  // virtual Tensor * add(Tensor & a, Tensor & b) override;
  Tensor & _th_set_(Tensor & self, Storage source) const override;
  Tensor & _th_set_(Tensor & self, Storage source, int64_t storage_offset, IntList size, IntList stride) const override;
  Tensor & _th_set_(Tensor & self, const Tensor & source) const override;
  Tensor & _th_set_(Tensor & self) const override;
  bool _th_is_set_to(const Tensor & self, const Tensor & tensor) const override;
  Tensor _th_clone(const Tensor & self) const override;
  Tensor & _th_unfold_out(Tensor & result, const Tensor & self, int64_t dimension, int64_t size, int64_t step) const override;
  Tensor _th_unfold(const Tensor & self, int64_t dimension, int64_t size, int64_t step) const override;
  Tensor _th_tensor(Storage storage, int64_t storageOffset, IntList size, IntList stride) const override;
  Tensor _th_tensor(IntList size, IntList stride) const override;
  Tensor _th_alias(const Tensor & self) const override;
  Tensor & s_copy_(Tensor & self, const Tensor & src, bool non_blocking) const override;
  Tensor _s_copy_from(const Tensor & self, const Tensor & dst, bool non_blocking) const override;
  void _copy_same_type_(Tensor & self, const Tensor & src) const override;
  Tensor empty(IntList size, const TensorOptions & options) const override;
  Tensor & resize_(Tensor & self, IntList size) const override;
  Scalar _local_scalar_dense(const Tensor & self) const override;
};

} // namespace at