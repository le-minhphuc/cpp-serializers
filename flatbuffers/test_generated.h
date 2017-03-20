// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_TEST_FLATBUFFERS_TEST_H_
#define FLATBUFFERS_GENERATED_TEST_FLATBUFFERS_TEST_H_

#include "flatbuffers/flatbuffers.h"

namespace flatbuffers_test {

struct Record;

struct Record FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_IDS = 4,
    VT_STRINGS = 6
  };
  const flatbuffers::Vector<int64_t> *ids() const { return GetPointer<const flatbuffers::Vector<int64_t> *>(VT_IDS); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *strings() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_STRINGS); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_IDS) &&
           verifier.Verify(ids()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_STRINGS) &&
           verifier.Verify(strings()) &&
           verifier.VerifyVectorOfStrings(strings()) &&
           verifier.EndTable();
  }
};

struct RecordBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ids(flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids) { fbb_.AddOffset(Record::VT_IDS, ids); }
  void add_strings(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings) { fbb_.AddOffset(Record::VT_STRINGS, strings); }
  RecordBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  RecordBuilder &operator=(const RecordBuilder &);
  flatbuffers::Offset<Record> Finish() {
    auto o = flatbuffers::Offset<Record>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<Record> CreateRecord(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int64_t>> ids = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> strings = 0) {
  RecordBuilder builder_(_fbb);
  builder_.add_strings(strings);
  builder_.add_ids(ids);
  return builder_.Finish();
}

inline flatbuffers::Offset<Record> CreateRecordDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int64_t> *ids = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *strings = nullptr) {
  return CreateRecord(_fbb, ids ? _fbb.CreateVector<int64_t>(*ids) : 0, strings ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*strings) : 0);
}

inline const flatbuffers_test::Record *GetRecord(const void *buf) { return flatbuffers::GetRoot<flatbuffers_test::Record>(buf); }

inline bool VerifyRecordBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<flatbuffers_test::Record>(nullptr); }

inline void FinishRecordBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<flatbuffers_test::Record> root) { fbb.Finish(root); }

}  // namespace flatbuffers_test

#endif  // FLATBUFFERS_GENERATED_TEST_FLATBUFFERS_TEST_H_