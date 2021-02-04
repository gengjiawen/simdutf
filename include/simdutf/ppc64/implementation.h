#ifndef SIMDUTF_PPC64_IMPLEMENTATION_H
#define SIMDUTF_PPC64_IMPLEMENTATION_H

#include "simdutf.h"
#include "simdutf/internal/isadetection.h"

namespace simdutf {
namespace ppc64 {

namespace {
using namespace simdutf;
using namespace simdutf::dom;
} // namespace

class implementation final : public simdutf::implementation {
public:
  simdutf_really_inline implementation()
      : simdutf::implementation("ppc64", "PPC64 ALTIVEC",
                                 internal::instruction_set::ALTIVEC) {}
  simdutf_warn_unused bool validate_utf8(const char *buf,
                                          size_t len) const noexcept final;
};

} // namespace ppc64
} // namespace simdutf

#endif // SIMDUTF_PPC64_IMPLEMENTATION_H