#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna5.5/Laboratorna5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestF_MultipleBits)
		{
			int depth = 0;
			int result = f(13, depth, 1);  
			Assert::AreEqual(3, result); 
			Assert::AreEqual(4, depth);   
		}
	};
}
