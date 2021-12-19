#pragma once
#include <fstream>

#define get_embed(filename, extension) __embed__##filename##__##extension##__
#define get_embed_size(filename, extension) sizeof(__embed__##filename##__##extension##__) / sizeof(__embed__##filename##__##extension##__[0])

namespace stde
{
	void export_embed(unsigned char data[], const char* filename, size_t size)
	{
		std::ofstream out(filename, std::ios::binary);
		if (out.is_open() and out.good())
		{
			for (size_t i = 0; i < size; ++i)
			{
				out << data[i];
			}
		}
		out.close();
	}
}
