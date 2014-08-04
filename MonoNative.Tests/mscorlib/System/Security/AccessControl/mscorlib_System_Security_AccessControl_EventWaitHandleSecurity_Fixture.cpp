// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.AccessControl
// Name: EventWaitHandleSecurity
// C++ Typed Name: mscorlib::System::Security::AccessControl::EventWaitHandleSecurity


#include <gtest/gtest.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_EventWaitHandleSecurity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_EventWaitHandleAccessRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_EventWaitHandleAuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Constructors Tests
				
				//EventWaitHandleSecurity()
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::AccessControl::EventWaitHandleSecurity *value = new mscorlib::System::Security::AccessControl::EventWaitHandleSecurity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method AccessRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,AccessRuleFactory_Test)
				{
					
					
				}

				// Method AddAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,AddAccessRule_Test)
				{
					
					
				}

				// Method RemoveAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,RemoveAccessRule_Test)
				{
					
					
				}

				// Method RemoveAccessRuleAll
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,RemoveAccessRuleAll_Test)
				{
					
					
				}

				// Method RemoveAccessRuleSpecific
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,RemoveAccessRuleSpecific_Test)
				{
					
					
				}

				// Method ResetAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,ResetAccessRule_Test)
				{
					
					
				}

				// Method SetAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,SetAccessRule_Test)
				{
					
					
				}

				// Method AuditRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,AuditRuleFactory_Test)
				{
					
					
				}

				// Method AddAuditRule
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,AddAuditRule_Test)
				{
					
					
				}

				// Method RemoveAuditRule
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,RemoveAuditRule_Test)
				{
					
					
				}

				// Method RemoveAuditRuleAll
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,RemoveAuditRuleAll_Test)
				{
					
					
				}

				// Method RemoveAuditRuleSpecific
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,RemoveAuditRuleSpecific_Test)
				{
					
					
				}

				// Method SetAuditRule
				//		Signature: mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,SetAuditRule_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property AccessRightType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,get_AccessRightType_Test)
				{
					
					
				}

				// Property AccessRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,get_AccessRuleType_Test)
				{
					
					
				}

				// Property AuditRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,get_AuditRuleType_Test)
				{
					
					
				}

				// Property AreAccessRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,get_AreAccessRulesCanonical_Test)
				{
					
					
				}

				// Property AreAccessRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,get_AreAccessRulesProtected_Test)
				{
					
					
				}

				// Property AreAuditRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,get_AreAuditRulesCanonical_Test)
				{
					
					
				}

				// Property AreAuditRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_EventWaitHandleSecurity_Fixture,get_AreAuditRulesProtected_Test)
				{
					
					
				}


			}
		}
	}
}
