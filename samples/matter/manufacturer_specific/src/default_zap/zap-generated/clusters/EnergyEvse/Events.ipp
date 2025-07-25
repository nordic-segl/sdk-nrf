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

#include <clusters/EnergyEvse/Events.h>

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
		namespace EnergyEvse
		{
			namespace Events
			{
				namespace EVConnected
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionID), sessionID));
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

							if (__context_tag == to_underlying(Fields::kSessionID)) {
								err = DataModel::Decode(reader, sessionID);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace EVConnected.
				namespace EVNotDetected
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionID), sessionID));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kState), state));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionDuration),
							sessionDuration));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionEnergyCharged),
							sessionEnergyCharged));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionEnergyDischarged),
							sessionEnergyDischarged));
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

							if (__context_tag == to_underlying(Fields::kSessionID)) {
								err = DataModel::Decode(reader, sessionID);
							} else if (__context_tag == to_underlying(Fields::kState)) {
								err = DataModel::Decode(reader, state);
							} else if (__context_tag ==
								   to_underlying(Fields::kSessionDuration)) {
								err = DataModel::Decode(reader, sessionDuration);
							} else if (__context_tag ==
								   to_underlying(Fields::kSessionEnergyCharged)) {
								err = DataModel::Decode(reader, sessionEnergyCharged);
							} else if (__context_tag ==
								   to_underlying(Fields::kSessionEnergyDischarged)) {
								err = DataModel::Decode(reader,
											sessionEnergyDischarged);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace EVNotDetected.
				namespace EnergyTransferStarted
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionID), sessionID));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kState), state));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kMaximumCurrent),
							maximumCurrent));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kMaximumDischargeCurrent),
							maximumDischargeCurrent));
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

							if (__context_tag == to_underlying(Fields::kSessionID)) {
								err = DataModel::Decode(reader, sessionID);
							} else if (__context_tag == to_underlying(Fields::kState)) {
								err = DataModel::Decode(reader, state);
							} else if (__context_tag ==
								   to_underlying(Fields::kMaximumCurrent)) {
								err = DataModel::Decode(reader, maximumCurrent);
							} else if (__context_tag ==
								   to_underlying(Fields::kMaximumDischargeCurrent)) {
								err = DataModel::Decode(reader,
											maximumDischargeCurrent);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace EnergyTransferStarted.
				namespace EnergyTransferStopped
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionID), sessionID));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kState), state));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kReason), reason));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kEnergyTransferred),
							energyTransferred));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kEnergyDischarged),
							energyDischarged));
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

							if (__context_tag == to_underlying(Fields::kSessionID)) {
								err = DataModel::Decode(reader, sessionID);
							} else if (__context_tag == to_underlying(Fields::kState)) {
								err = DataModel::Decode(reader, state);
							} else if (__context_tag == to_underlying(Fields::kReason)) {
								err = DataModel::Decode(reader, reason);
							} else if (__context_tag ==
								   to_underlying(Fields::kEnergyTransferred)) {
								err = DataModel::Decode(reader, energyTransferred);
							} else if (__context_tag ==
								   to_underlying(Fields::kEnergyDischarged)) {
								err = DataModel::Decode(reader, energyDischarged);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace EnergyTransferStopped.
				namespace Fault
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kSessionID), sessionID));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kState), state));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kFaultStatePreviousState),
							faultStatePreviousState));
						ReturnErrorOnFailure(DataModel::Encode(
							aWriter, TLV::ContextTag(Fields::kFaultStateCurrentState),
							faultStateCurrentState));
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

							if (__context_tag == to_underlying(Fields::kSessionID)) {
								err = DataModel::Decode(reader, sessionID);
							} else if (__context_tag == to_underlying(Fields::kState)) {
								err = DataModel::Decode(reader, state);
							} else if (__context_tag ==
								   to_underlying(Fields::kFaultStatePreviousState)) {
								err = DataModel::Decode(reader,
											faultStatePreviousState);
							} else if (__context_tag ==
								   to_underlying(Fields::kFaultStateCurrentState)) {
								err = DataModel::Decode(reader, faultStateCurrentState);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace Fault.
				namespace Rfid
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						TLV::TLVType outer;
						ReturnErrorOnFailure(
							aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
						ReturnErrorOnFailure(
							DataModel::Encode(aWriter, TLV::ContextTag(Fields::kUid), uid));
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

							if (__context_tag == to_underlying(Fields::kUid)) {
								err = DataModel::Decode(reader, uid);
							} else {
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace Rfid.
			} // namespace Events
		} // namespace EnergyEvse
	} // namespace Clusters
} // namespace app
} // namespace chip
