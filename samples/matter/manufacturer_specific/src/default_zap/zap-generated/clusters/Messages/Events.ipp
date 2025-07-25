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

#include <clusters/Messages/Events.h>

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
		namespace Messages
		{
			namespace Events
			{
				namespace MessageQueued
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kMessageID), messageID));
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

							if (__context_tag == to_underlying(Fields::kMessageID)) {
								err = DataModel::Decode(reader, messageID);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace MessageQueued.
				namespace MessagePresented
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kMessageID), messageID));
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

							if (__context_tag == to_underlying(Fields::kMessageID)) {
								err = DataModel::Decode(reader, messageID);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace MessagePresented.
				namespace MessageComplete
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kMessageID), messageID));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kResponseID), responseID));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kReply), reply));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kFutureMessagesPreference),
							futureMessagesPreference));
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

							if (__context_tag == to_underlying(Fields::kMessageID)) {
								err = DataModel::Decode(reader, messageID);
							} else if (__context_tag ==
								   to_underlying(Fields::kResponseID)) {
								err = DataModel::Decode(reader, responseID);
							} else if (__context_tag == to_underlying(Fields::kReply)) {
								err = DataModel::Decode(reader, reply);
							} else if (__context_tag ==
								   to_underlying(Fields::kFutureMessagesPreference)) {
								err = DataModel::Decode(reader,
											futureMessagesPreference);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace MessageComplete.
			} // namespace Events
		} // namespace Messages
	} // namespace Clusters
} // namespace app
} // namespace chip
