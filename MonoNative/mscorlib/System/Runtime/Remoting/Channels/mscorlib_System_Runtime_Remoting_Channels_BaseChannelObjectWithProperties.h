#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_BASECHANNELOBJECTWITHPROPERTIES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CHANNELS_BASECHANNELOBJECTWITHPROPERTIES_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ICollection.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerable.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionary.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IDictionaryEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Array;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Channels
				{

					class BaseChannelObjectWithProperties
						: public mscorlib::System::Object
						, public virtual mscorlib::System::Collections::ICollection
						, public virtual mscorlib::System::Collections::IEnumerable
						, public virtual mscorlib::System::Collections::IDictionary
					{
					public:
						BaseChannelObjectWithProperties(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						, mscorlib::System::Collections::ICollection(NULL)
						, mscorlib::System::Collections::IEnumerable(NULL)
						, mscorlib::System::Collections::IDictionary(NULL)
						{
						};
					
						BaseChannelObjectWithProperties(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						, mscorlib::System::Collections::ICollection(nativeObject)
						, mscorlib::System::Collections::IEnumerable(nativeObject)
						, mscorlib::System::Collections::IDictionary(nativeObject)
						{
						};
					
						~BaseChannelObjectWithProperties()
						{
						};
					

						BaseChannelObjectWithProperties & operator=(BaseChannelObjectWithProperties &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  Add(mscorlib::System::Object key, mscorlib::System::Object value);
						virtual void  Clear();
						virtual mscorlib::System::Boolean  Contains(mscorlib::System::Object key);
						virtual void  CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index);
						virtual mscorlib::System::Collections::IDictionaryEnumerator * GetEnumerator();
						virtual void  Remove(mscorlib::System::Object key);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Count)) mscorlib::System::Int32  Count;
						__declspec(property(get=get_IsFixedSize)) mscorlib::System::Boolean  IsFixedSize;
						__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
						__declspec(property(get=get_IsSynchronized)) mscorlib::System::Boolean  IsSynchronized;
						__declspec(property(get=get_Item, put=set_Item)) mscorlib::System::Object  Item[];

						//Get Set Properties Methods
						//	Get:Count
						mscorlib::System::Int32  get_Count();

						//	Get:IsFixedSize
						mscorlib::System::Boolean  get_IsFixedSize();

						//	Get:IsReadOnly
						mscorlib::System::Boolean  get_IsReadOnly();

						//	Get:IsSynchronized
						mscorlib::System::Boolean  get_IsSynchronized();

						//	Get/Set:Item
						mscorlib::System::Object  get_Item(mscorlib::System::Object key);
						void set_Item(mscorlib::System::Object key, mscorlib::System::Object  value);

						//	Get:Keys
						mscorlib::System::Collections::ICollection  get_Keys();

						//	Get:Properties
						mscorlib::System::Collections::IDictionary  get_Properties();

						//	Get:SyncRoot
						mscorlib::System::Object  get_SyncRoot();

						//	Get:Values
						mscorlib::System::Collections::ICollection  get_Values();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
