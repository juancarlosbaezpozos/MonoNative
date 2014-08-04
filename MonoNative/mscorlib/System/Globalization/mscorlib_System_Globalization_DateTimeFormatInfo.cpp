#include <mscorlib/System/Globalization/mscorlib_System_Globalization_DateTimeFormatInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_Calendar.h>



namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			//Public Methods
			mscorlib::System::Globalization::DateTimeFormatInfo DateTimeFormatInfo::GetInstance(mscorlib::System::IFormatProvider provider)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(provider).name());
					__parameters__[0] = (MonoObject*)provider;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetInstance", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::DateTimeFormatInfo(__result__);
			}

			mscorlib::System::Globalization::DateTimeFormatInfo DateTimeFormatInfo::ReadOnly(mscorlib::System::Globalization::DateTimeFormatInfo dtfi)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(dtfi).name());
					__parameters__[0] = (MonoObject*)dtfi;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "ReadOnly", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Globalization::DateTimeFormatInfo(__result__);
			}

			mscorlib::System::Object DateTimeFormatInfo::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object DateTimeFormatInfo::GetFormat(mscorlib::System::Type formatType)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(formatType).name());
					__parameters__[0] = (MonoObject*)formatType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetFormat", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::String DateTimeFormatInfo::GetAbbreviatedEraName(mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(era).name());
					__parameters__[0] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetAbbreviatedEraName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String DateTimeFormatInfo::GetAbbreviatedMonthName(mscorlib::System::Int32 month)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(month).name());
					__parameters__[0] = &month;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetAbbreviatedMonthName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Int32 DateTimeFormatInfo::GetEra(mscorlib::System::String eraName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(eraName).name());
					__parameters__[0] = (MonoObject*)eraName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetEra", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String DateTimeFormatInfo::GetEraName(mscorlib::System::Int32 era)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(era).name());
					__parameters__[0] = &era;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetEraName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String DateTimeFormatInfo::GetMonthName(mscorlib::System::Int32 month)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(month).name());
					__parameters__[0] = &month;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetMonthName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			std::vector<mscorlib::System::String*> DateTimeFormatInfo::GetAllDateTimePatterns()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetAllDateTimePatterns", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::String (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::String*> DateTimeFormatInfo::GetAllDateTimePatterns(mscorlib::System::Char format)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(format).name());
					__parameters__[0] = &format;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetAllDateTimePatterns", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::String (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::String DateTimeFormatInfo::GetDayName(mscorlib::System::DayOfWeek::__ENUM__ dayofweek)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(dayofweek).name());
					__parameters__[0] = reinterpret_cast<void*>(dayofweek);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetDayName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String DateTimeFormatInfo::GetAbbreviatedDayName(mscorlib::System::DayOfWeek::__ENUM__ dayofweek)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(dayofweek).name());
					__parameters__[0] = reinterpret_cast<void*>(dayofweek);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetAbbreviatedDayName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String DateTimeFormatInfo::GetShortestDayName(mscorlib::System::DayOfWeek::__ENUM__ dayOfWeek)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(dayOfWeek).name());
					__parameters__[0] = reinterpret_cast<void*>(dayOfWeek);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "GetShortestDayName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::SetAllDateTimePatterns(std::vector<mscorlib::System::String*> patterns, mscorlib::System::Char format)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(patterns).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(format).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::String*>(patterns, typeid(mscorlib::System::String).name());
					__parameters__[1] = &format;
					Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "SetAllDateTimePatterns", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:IsReadOnly
			mscorlib::System::Boolean  DateTimeFormatInfo::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:AbbreviatedDayNames
			std::vector<mscorlib::System::String*>  DateTimeFormatInfo::get_AbbreviatedDayNames()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_AbbreviatedDayNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void DateTimeFormatInfo::set_AbbreviatedDayNames(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_AbbreviatedDayNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:AbbreviatedMonthNames
			std::vector<mscorlib::System::String*>  DateTimeFormatInfo::get_AbbreviatedMonthNames()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_AbbreviatedMonthNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void DateTimeFormatInfo::set_AbbreviatedMonthNames(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_AbbreviatedMonthNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:DayNames
			std::vector<mscorlib::System::String*>  DateTimeFormatInfo::get_DayNames()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_DayNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void DateTimeFormatInfo::set_DayNames(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_DayNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:MonthNames
			std::vector<mscorlib::System::String*>  DateTimeFormatInfo::get_MonthNames()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_MonthNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void DateTimeFormatInfo::set_MonthNames(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_MonthNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:AbbreviatedMonthGenitiveNames
			std::vector<mscorlib::System::String*>  DateTimeFormatInfo::get_AbbreviatedMonthGenitiveNames()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_AbbreviatedMonthGenitiveNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void DateTimeFormatInfo::set_AbbreviatedMonthGenitiveNames(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_AbbreviatedMonthGenitiveNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:MonthGenitiveNames
			std::vector<mscorlib::System::String*>  DateTimeFormatInfo::get_MonthGenitiveNames()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_MonthGenitiveNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void DateTimeFormatInfo::set_MonthGenitiveNames(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_MonthGenitiveNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:NativeCalendarName
			mscorlib::System::String  DateTimeFormatInfo::get_NativeCalendarName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_NativeCalendarName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:ShortestDayNames
			std::vector<mscorlib::System::String*>  DateTimeFormatInfo::get_ShortestDayNames()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_ShortestDayNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
			}

			void DateTimeFormatInfo::set_ShortestDayNames(std::vector<mscorlib::System::String*>  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_ShortestDayNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:AMDesignator
			mscorlib::System::String  DateTimeFormatInfo::get_AMDesignator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_AMDesignator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_AMDesignator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_AMDesignator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:PMDesignator
			mscorlib::System::String  DateTimeFormatInfo::get_PMDesignator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_PMDesignator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_PMDesignator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_PMDesignator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:DateSeparator
			mscorlib::System::String  DateTimeFormatInfo::get_DateSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_DateSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_DateSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_DateSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:TimeSeparator
			mscorlib::System::String  DateTimeFormatInfo::get_TimeSeparator()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_TimeSeparator", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_TimeSeparator(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_TimeSeparator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LongDatePattern
			mscorlib::System::String  DateTimeFormatInfo::get_LongDatePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_LongDatePattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_LongDatePattern(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_LongDatePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:ShortDatePattern
			mscorlib::System::String  DateTimeFormatInfo::get_ShortDatePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_ShortDatePattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_ShortDatePattern(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_ShortDatePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:ShortTimePattern
			mscorlib::System::String  DateTimeFormatInfo::get_ShortTimePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_ShortTimePattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_ShortTimePattern(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_ShortTimePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LongTimePattern
			mscorlib::System::String  DateTimeFormatInfo::get_LongTimePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_LongTimePattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_LongTimePattern(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_LongTimePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:MonthDayPattern
			mscorlib::System::String  DateTimeFormatInfo::get_MonthDayPattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_MonthDayPattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_MonthDayPattern(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_MonthDayPattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:YearMonthPattern
			mscorlib::System::String  DateTimeFormatInfo::get_YearMonthPattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_YearMonthPattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_YearMonthPattern(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_YearMonthPattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:FullDateTimePattern
			mscorlib::System::String  DateTimeFormatInfo::get_FullDateTimePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_FullDateTimePattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DateTimeFormatInfo::set_FullDateTimePattern(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_FullDateTimePattern", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:FirstDayOfWeek
			mscorlib::System::DayOfWeek::__ENUM__  DateTimeFormatInfo::get_FirstDayOfWeek()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_FirstDayOfWeek", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::DayOfWeek::__ENUM__*)mono_object_unbox(__result__);
			}

			void DateTimeFormatInfo::set_FirstDayOfWeek(mscorlib::System::DayOfWeek::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_FirstDayOfWeek", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Calendar
			mscorlib::System::Globalization::Calendar  DateTimeFormatInfo::get_Calendar()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_Calendar", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::Calendar(__result__);
			}

			void DateTimeFormatInfo::set_Calendar(mscorlib::System::Globalization::Calendar  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_Calendar", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CalendarWeekRule
			mscorlib::System::Globalization::CalendarWeekRule::__ENUM__  DateTimeFormatInfo::get_CalendarWeekRule()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_CalendarWeekRule", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Globalization::CalendarWeekRule::__ENUM__*)mono_object_unbox(__result__);
			}

			void DateTimeFormatInfo::set_CalendarWeekRule(mscorlib::System::Globalization::CalendarWeekRule::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "set_CalendarWeekRule", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:RFC1123Pattern
			mscorlib::System::String  DateTimeFormatInfo::get_RFC1123Pattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_RFC1123Pattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:SortableDateTimePattern
			mscorlib::System::String  DateTimeFormatInfo::get_SortableDateTimePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_SortableDateTimePattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:UniversalSortableDateTimePattern
			mscorlib::System::String  DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_UniversalSortableDateTimePattern", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:CurrentInfo
			mscorlib::System::Globalization::DateTimeFormatInfo  DateTimeFormatInfo::get_CurrentInfo()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_CurrentInfo", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::DateTimeFormatInfo(__result__);
			}


			//	Get:InvariantInfo
			mscorlib::System::Globalization::DateTimeFormatInfo  DateTimeFormatInfo::get_InvariantInfo()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Globalization", "DateTimeFormatInfo", 0, NULL, "get_InvariantInfo", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::DateTimeFormatInfo(__result__);
			}




		}
	}
}
