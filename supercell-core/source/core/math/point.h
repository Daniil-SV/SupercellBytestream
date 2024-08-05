#pragma once

#include "core/memory/memory.h"

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4201)
#endif

namespace sc
{
	template<typename T = int>
	struct Point
	{
		union
		{
			struct
			{
				T x, y;
			};

			struct
			{
				T u, v;
			};

			struct
			{
				T s, t;
			};

			struct
			{
				T r, g;
			};

			struct
			{
				T l, a;
			};

			T coords[2];
		};

		Point(const T* arr)
		{
			Memory::copy(arr, coords, sizeof(coords));
		}

		Point(T a = 0.0f, T b = 0.0f)
		{
			x = a;
			y = b;
		};
	};

	typedef Point<float> PointF;
}

#ifdef _MSC_VER
#pragma warning(pop)
#endif
