#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_SystemAcl.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Public Methods
				void SystemAcl::AddAudit(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "AddAudit", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				void SystemAcl::AddAudit(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(objectFlags).name());
						__parameter_types__[6] = Global::GetType(typeid(objectType).name());
						__parameter_types__[7] = Global::GetType(typeid(inheritedObjectType).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						mscorlib::System::Int32 __param_objectFlags__ = objectFlags;
						__parameters__[5] = &__param_objectFlags__;
						__parameters__[6] = (MonoObject*)objectType;
						__parameters__[7] = (MonoObject*)inheritedObjectType;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "AddAudit", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean SystemAcl::RemoveAudit(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "RemoveAudit", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean SystemAcl::RemoveAudit(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(objectFlags).name());
						__parameter_types__[6] = Global::GetType(typeid(objectType).name());
						__parameter_types__[7] = Global::GetType(typeid(inheritedObjectType).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						mscorlib::System::Int32 __param_objectFlags__ = objectFlags;
						__parameters__[5] = &__param_objectFlags__;
						__parameters__[6] = (MonoObject*)objectType;
						__parameters__[7] = (MonoObject*)inheritedObjectType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "RemoveAudit", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SystemAcl::RemoveAuditSpecific(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "RemoveAuditSpecific", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				void SystemAcl::RemoveAuditSpecific(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(objectFlags).name());
						__parameter_types__[6] = Global::GetType(typeid(objectType).name());
						__parameter_types__[7] = Global::GetType(typeid(inheritedObjectType).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						mscorlib::System::Int32 __param_objectFlags__ = objectFlags;
						__parameters__[5] = &__param_objectFlags__;
						__parameters__[6] = (MonoObject*)objectType;
						__parameters__[7] = (MonoObject*)inheritedObjectType;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "RemoveAuditSpecific", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				}

				void SystemAcl::SetAudit(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "SetAudit", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				void SystemAcl::SetAudit(mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ auditFlags, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__ objectFlags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(auditFlags).name());
						__parameter_types__[1] = Global::GetType(typeid(sid).name());
						__parameter_types__[2] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(objectFlags).name());
						__parameter_types__[6] = Global::GetType(typeid(objectType).name());
						__parameter_types__[7] = Global::GetType(typeid(inheritedObjectType).name());
						mscorlib::System::Int32 __param_auditFlags__ = auditFlags;
						__parameters__[0] = &__param_auditFlags__;
						__parameters__[1] = (MonoObject*)sid;
						__parameters__[2] = &accessMask;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[3] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[4] = &__param_propagationFlags__;
						mscorlib::System::Int32 __param_objectFlags__ = objectFlags;
						__parameters__[5] = &__param_objectFlags__;
						__parameters__[6] = (MonoObject*)objectType;
						__parameters__[7] = (MonoObject*)inheritedObjectType;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "SystemAcl", 0, NULL, "SetAudit", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:BinaryLength
				mscorlib::System::Int32  SystemAcl::get_BinaryLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Count
				mscorlib::System::Int32  SystemAcl::get_Count() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsCanonical
				mscorlib::System::Boolean  SystemAcl::get_IsCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_IsCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsContainer
				mscorlib::System::Boolean  SystemAcl::get_IsContainer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_IsContainer", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsDS
				mscorlib::System::Boolean  SystemAcl::get_IsDS() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_IsDS", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Revision
				mscorlib::System::Byte  SystemAcl::get_Revision() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_Revision", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Byte(__result__);
				}


				//	Get/Set:Item
				mscorlib::System::Security::AccessControl::GenericAce  SystemAcl::get_Item(mscorlib::System::Int32 index) const
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameters__[0] = &index;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::GenericAce(__result__);
				}

				void SystemAcl::set_Item(mscorlib::System::Int32 index, mscorlib::System::Security::AccessControl::GenericAce  value)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(index).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &index;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonAcl", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}


				//	Get:IsSynchronized
				mscorlib::System::Boolean  SystemAcl::get_IsSynchronized() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:SyncRoot
				mscorlib::System::Object  SystemAcl::get_SyncRoot() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericAcl", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
