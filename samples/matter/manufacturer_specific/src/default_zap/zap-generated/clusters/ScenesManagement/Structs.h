/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
// This file is generated from clusters-Structs.h.zapt

#pragma once

#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/Nullable.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/Optional.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Structs.h>

#include <cstdint>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace ScenesManagement
		{
			namespace Structs
			{
				namespace AttributeValuePairStruct
				{
					enum class Fields : uint8_t {
						kAttributeID = 0,
						kValueUnsigned8 = 1,
						kValueSigned8 = 2,
						kValueUnsigned16 = 3,
						kValueSigned16 = 4,
						kValueUnsigned32 = 5,
						kValueSigned32 = 6,
						kValueUnsigned64 = 7,
						kValueSigned64 = 8,
					};

					struct Type {
					public:
						chip::AttributeId attributeID = static_cast<chip::AttributeId>(0);
						Optional<uint8_t> valueUnsigned8;
						Optional<int8_t> valueSigned8;
						Optional<uint16_t> valueUnsigned16;
						Optional<int16_t> valueSigned16;
						Optional<uint32_t> valueUnsigned32;
						Optional<int32_t> valueSigned32;
						Optional<uint64_t> valueUnsigned64;
						Optional<int64_t> valueSigned64;

						CHIP_ERROR Decode(TLV::TLVReader &reader);

						static constexpr bool kIsFabricScoped = false;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
					};

					using DecodableType = Type;

				} // namespace AttributeValuePairStruct
				namespace ExtensionFieldSetStruct
				{
					enum class Fields : uint8_t {
						kClusterID = 0,
						kAttributeValueList = 1,
					};

					struct Type {
					public:
						chip::ClusterId clusterID = static_cast<chip::ClusterId>(0);
						DataModel::List<const Structs::AttributeValuePairStruct::Type>
							attributeValueList;

						static constexpr bool kIsFabricScoped = false;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
					};

					struct DecodableType {
					public:
						chip::ClusterId clusterID = static_cast<chip::ClusterId>(0);
						DataModel::DecodableList<Structs::AttributeValuePairStruct::DecodableType>
							attributeValueList;

						CHIP_ERROR Decode(TLV::TLVReader &reader);

						static constexpr bool kIsFabricScoped = false;
					};

				} // namespace ExtensionFieldSetStruct
				namespace SceneInfoStruct
				{
					enum class Fields : uint8_t {
						kSceneCount = 0,
						kCurrentScene = 1,
						kCurrentGroup = 2,
						kSceneValid = 3,
						kRemainingCapacity = 4,
						kFabricIndex = 254,
					};

					struct Type {
					public:
						uint8_t sceneCount = static_cast<uint8_t>(0);
						uint8_t currentScene = static_cast<uint8_t>(0);
						chip::GroupId currentGroup = static_cast<chip::GroupId>(0);
						bool sceneValid = static_cast<bool>(0);
						uint8_t remainingCapacity = static_cast<uint8_t>(0);
						chip::FabricIndex fabricIndex = static_cast<chip::FabricIndex>(0);

						CHIP_ERROR Decode(TLV::TLVReader &reader);

						static constexpr bool kIsFabricScoped = true;

						auto GetFabricIndex() const { return fabricIndex; }

						void SetFabricIndex(chip::FabricIndex fabricIndex_)
						{
							fabricIndex = fabricIndex_;
						}

						CHIP_ERROR EncodeForWrite(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
						CHIP_ERROR EncodeForRead(TLV::TLVWriter &aWriter, TLV::Tag aTag,
									 FabricIndex aAccessingFabricIndex) const;

					private:
						CHIP_ERROR
						DoEncode(TLV::TLVWriter &aWriter, TLV::Tag aTag,
							 const Optional<FabricIndex> &aAccessingFabricIndex) const;
					};

					using DecodableType = Type;

				} // namespace SceneInfoStruct
			} // namespace Structs
		} // namespace ScenesManagement
	} // namespace Clusters
} // namespace app
} // namespace chip
