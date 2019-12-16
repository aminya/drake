#include "drake/geometry/proximity_properties.h"

namespace drake {
namespace geometry {
namespace internal {

const char* const kMaterialGroup = "material";
const char* const kElastic = "elastic_modulus";
const char* const kFriction = "coulomb_friction";
const char* const kHcDissipation = "hunt_crossley_dissipation";

const char* const kHydroGroup = "hydroelastic";
const char* const kRezHint = "resolution_hint";

}  // namespace internal

// NOTE: Although these functions currently do the same thing, we're leaving
// the two functions in place to facilitate future differences.

void AddRigidHydroelasticProperties(double resolution_hint,
                                    ProximityProperties* properties) {
  DRAKE_DEMAND(properties);
  properties->AddProperty(internal::kHydroGroup, internal::kRezHint,
                          resolution_hint);
}

void AddSoftHydroelasticProperties(double resolution_hint,
                                   ProximityProperties* properties) {
  DRAKE_DEMAND(properties);
  properties->AddProperty(internal::kHydroGroup, internal::kRezHint,
                          resolution_hint);
}

}  // namespace geometry
}  // namespace drake
