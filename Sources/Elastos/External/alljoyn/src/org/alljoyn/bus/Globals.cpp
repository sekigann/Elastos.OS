
#include "org/alljoyn/bus/Globals.h"

namespace Org {
namespace Alljoyn {
namespace Bus {

// Annotations
//
const String Globals::Annotation_BusInterface("Org.Alljoyn.Bus.Annotation.BusInterface");
const String Globals::Annotation_BusMethod("Org.Alljoyn.Bus.Annotation.BusMethod");
const String Globals::Annotation_BusSignal("Org.Alljoyn.Bus.Annotation.BusSignal");
const String Globals::Annotation_BusProperty("Org.Alljoyn.Bus.Annotation.BusProperty");
const String Globals::Annotation_Secure("Org.Alljoyn.Bus.Annotation.Secure");
const String Globals::Annotation_BusAnnotations("Org.Alljoyn.Bus.Annotation.BusAnnotations");
const String Globals::Annotation_AccessPermission("Org.Alljoyn.Bus.Annotation.AccessPermission");
const String Globals::Annotation_BusSignalHandler("Org.Alljoyn.Bus.Annotation.BusSignalHandler");

const String Globals::BusProperty_EmitsChangedSignal("org.freedesktop.DBus.Property.EmitsChangedSignal");
const Int32 Globals::BusProperty_ANNOTATE_EMIT_CHANGED_SIGNAL = 1;
const Int32 Globals::BusProperty_ANNOTATE_EMIT_CHANGED_SIGNAL_INVALIDATES = 2;
const String Globals::BusProperty_ANNOTATE_EMIT_CHANGED_SIGNAL_STRING("BusProperty.ANNOTATE_EMIT_CHANGED_SIGNAL");
const String Globals::BusProperty_ANNOTATE_EMIT_CHANGED_SIGNAL_INVALIDATES_STRING("BusProperty.ANNOTATE_EMIT_CHANGED_SIGNAL_INVALIDATES");

} // namespace Bus
} // namespace Alljoyn
} // namespace Org