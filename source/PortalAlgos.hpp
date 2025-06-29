#pragma once

#include <cstdint>
#include <string>
#include <optional>

#include "PortalTag.hpp"

namespace Runes
{
	void computeKey(PortalTagHeader* header, uint8_t blockId, uint8_t key[0x16]);
	void decryptBlock(PortalTagHeader* header, uint8_t* cBlockData, uint8_t* pBlockData, uint8_t blockId);
	void encryptBlock(PortalTagHeader* header, uint8_t* pBlockData, uint8_t* cBlockData, uint8_t blockId);
	std::optional<std::string> readSalt();
}