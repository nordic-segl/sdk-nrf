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
// This file is generated from clusters-Events.ipp.zapt

#include <clusters/Switch/Events.h>

#include <app/data-model/Decode.h>
#include <app/data-model/Encode.h>
#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace Switch
		{
			namespace Events
			{
				namespace SwitchLatched
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kNewPosition), newPosition));
						return aWriter.EndContainer(outer);
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNewPosition)) {
								err = DataModel::Decode(reader, newPosition);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace SwitchLatched.
				namespace InitialPress
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kNewPosition), newPosition));
						return aWriter.EndContainer(outer);
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNewPosition)) {
								err = DataModel::Decode(reader, newPosition);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace InitialPress.
				namespace LongPress
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kNewPosition), newPosition));
						return aWriter.EndContainer(outer);
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNewPosition)) {
								err = DataModel::Decode(reader, newPosition);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace LongPress.
				namespace ShortRelease
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kPreviousPosition),
							previousPosition));
						return aWriter.EndContainer(outer);
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kPreviousPosition)) {
								err = DataModel::Decode(reader, previousPosition);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace ShortRelease.
				namespace LongRelease
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kPreviousPosition),
							previousPosition));
						return aWriter.EndContainer(outer);
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kPreviousPosition)) {
								err = DataModel::Decode(reader, previousPosition);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace LongRelease.
				namespace MultiPressOngoing
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kNewPosition), newPosition));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter,
							TLV::ContextTag(Fields::kCurrentNumberOfPressesCounted),
							currentNumberOfPressesCounted));
						return aWriter.EndContainer(outer);
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNewPosition)) {
								err = DataModel::Decode(reader, newPosition);
							} else if (__context_tag ==
								   to_underlying(
									   Fields::kCurrentNumberOfPressesCounted)) {
								err = DataModel::Decode(reader,
											currentNumberOfPressesCounted);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace MultiPressOngoing.
				namespace MultiPressComplete
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kPreviousPosition),
							previousPosition));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kTotalNumberOfPressesCounted),
							totalNumberOfPressesCounted));
						return aWriter.EndContainer(outer);
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kPreviousPosition)) {
								err = DataModel::Decode(reader, previousPosition);
							} else if (__context_tag ==
								   to_underlying(
									   Fields::kTotalNumberOfPressesCounted)) {
								err = DataModel::Decode(reader,
											totalNumberOfPressesCounted);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace MultiPressComplete.
			} // namespace Events
		} // namespace Switch
	} // namespace Clusters
} // namespace app
} // namespace chip
