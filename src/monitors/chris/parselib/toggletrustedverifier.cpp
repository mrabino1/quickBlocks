/*-------------------------------------------------------------------------------------------
 * qblocks - fast, easily-accessible, fully-decentralized data from blockchains
 * copyright (c) 2018 Great Hill Corporation (http://greathill.com)
 *
 * This program is free software: you may redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version. This program is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details. You should have received a copy of the GNU General
 * Public License along with this program. If not, see http://www.gnu.org/licenses/.
 *-------------------------------------------------------------------------------------------*/
/*
 * This file was generated with makeClass. Edit only those parts of the code inside
 * of 'EXISTING_CODE' tags.
 */
#include <algorithm>
#include "toggletrustedverifier.h"
#include "etherlib.h"

//---------------------------------------------------------------------------
IMPLEMENT_NODE(CToggleTrustedVerifier, CTransaction);

//---------------------------------------------------------------------------
static string_q nextToggletrustedverifierChunk(const string_q& fieldIn, const void *dataPtr);
static string_q nextToggletrustedverifierChunk_custom(const string_q& fieldIn, const void *dataPtr);

//---------------------------------------------------------------------------
void CToggleTrustedVerifier::Format(ostream& ctx, const string_q& fmtIn, void *dataPtr) const {
    if (!m_showing)
        return;

    if (fmtIn.empty()) {
        ctx << toJson();
        return;
    }

    string_q fmt = fmtIn;
    // EXISTING_CODE
    // EXISTING_CODE

    while (!fmt.empty())
        ctx << getNextChunk(fmt, nextToggletrustedverifierChunk, this);
}

//---------------------------------------------------------------------------
string_q nextToggletrustedverifierChunk(const string_q& fieldIn, const void *dataPtr) {
    if (dataPtr)
        return reinterpret_cast<const CToggleTrustedVerifier *>(dataPtr)->getValueByName(fieldIn);

    // EXISTING_CODE
    // EXISTING_CODE

    return fldNotFound(fieldIn);
}

//---------------------------------------------------------------------------------------------------
bool CToggleTrustedVerifier::setValueByName(const string_q& fieldName, const string_q& fieldValue) {
    // EXISTING_CODE
    // EXISTING_CODE

    if (CTransaction::setValueByName(fieldName, fieldValue))
        return true;

    switch (tolower(fieldName[0])) {
        case '_':
            if ( fieldName % "_verifier" ) { _verifier = str_2_Addr(fieldValue); return true; }
            break;
        default:
            break;
    }
    return false;
}

//---------------------------------------------------------------------------------------------------
void CToggleTrustedVerifier::finishParse() {
    // EXISTING_CODE
    // EXISTING_CODE
}

//---------------------------------------------------------------------------------------------------
bool CToggleTrustedVerifier::Serialize(CArchive& archive) {

    if (archive.isWriting())
        return SerializeC(archive);

    // Always read the base class (it will handle its own backLevels if any, then
    // read this object's back level (if any) or the current version.
    CTransaction::Serialize(archive);
    if (readBackLevel(archive))
        return true;

    // EXISTING_CODE
    // EXISTING_CODE
    archive >> _verifier;
    finishParse();
    return true;
}

//---------------------------------------------------------------------------------------------------
bool CToggleTrustedVerifier::SerializeC(CArchive& archive) const {

    // Writing always write the latest version of the data
    CTransaction::SerializeC(archive);

    // EXISTING_CODE
    // EXISTING_CODE
    archive << _verifier;

    return true;
}

//---------------------------------------------------------------------------
CArchive& operator>>(CArchive& archive, CToggleTrustedVerifierArray& array) {
    uint64_t count;
    archive >> count;
    array.resize(count);
    for (size_t i = 0 ; i < count ; i++) {
        ASSERT(i < array.capacity());
        array.at(i).Serialize(archive);
    }
    return archive;
}

//---------------------------------------------------------------------------
CArchive& operator<<(CArchive& archive, const CToggleTrustedVerifierArray& array) {
    uint64_t count = array.size();
    archive << count;
    for (size_t i = 0 ; i < array.size() ; i++)
        array[i].SerializeC(archive);
    return archive;
}

//---------------------------------------------------------------------------
void CToggleTrustedVerifier::registerClass(void) {
    static bool been_here = false;
    if (been_here) return;
    been_here = true;

    CTransaction::registerClass();

    size_t fieldNum = 1000;
    ADD_FIELD(CToggleTrustedVerifier, "schema",  T_NUMBER, ++fieldNum);
    ADD_FIELD(CToggleTrustedVerifier, "deleted", T_BOOL,  ++fieldNum);
    ADD_FIELD(CToggleTrustedVerifier, "showing", T_BOOL,  ++fieldNum);
    ADD_FIELD(CToggleTrustedVerifier, "cname", T_TEXT,  ++fieldNum);
    ADD_FIELD(CToggleTrustedVerifier, "_verifier", T_ADDRESS, ++fieldNum);

    // Hide our internal fields, user can turn them on if they like
    HIDE_FIELD(CToggleTrustedVerifier, "schema");
    HIDE_FIELD(CToggleTrustedVerifier, "deleted");
    HIDE_FIELD(CToggleTrustedVerifier, "showing");
    HIDE_FIELD(CToggleTrustedVerifier, "cname");

    builtIns.push_back(_biCToggleTrustedVerifier);

    // EXISTING_CODE
    // EXISTING_CODE
}

//---------------------------------------------------------------------------
string_q nextToggletrustedverifierChunk_custom(const string_q& fieldIn, const void *dataPtr) {
    const CToggleTrustedVerifier *tog = reinterpret_cast<const CToggleTrustedVerifier *>(dataPtr);
    if (tog) {
        switch (tolower(fieldIn[0])) {
            // EXISTING_CODE
            // EXISTING_CODE
            case 'p':
                // Display only the fields of this node, not it's parent type
                if ( fieldIn % "parsed" )
                    return nextBasenodeChunk(fieldIn, tog);
                // EXISTING_CODE
                // EXISTING_CODE
                break;

            default:
                break;
        }
    }

    return "";
}

//---------------------------------------------------------------------------
bool CToggleTrustedVerifier::readBackLevel(CArchive& archive) {

    bool done = false;
    // EXISTING_CODE
    // EXISTING_CODE
    return done;
}

//---------------------------------------------------------------------------
string_q CToggleTrustedVerifier::getValueByName(const string_q& fieldName) const {

    // Give customized code a chance to override first
    string_q ret = nextToggletrustedverifierChunk_custom(fieldName, this);
    if (!ret.empty())
        return ret;

    // Return field values
    switch (tolower(fieldName[0])) {
        case '_':
            if ( fieldName % "_verifier" ) return addr_2_Str(_verifier);
            break;
    }

    // EXISTING_CODE
    // EXISTING_CODE

    // Finally, give the parent class a chance
    return CTransaction::getValueByName(fieldName);
}

//-------------------------------------------------------------------------
ostream& operator<<(ostream& os, const CToggleTrustedVerifier& item) {
    // EXISTING_CODE
    // EXISTING_CODE

    item.Format(os, "", nullptr);
    os << "\n";
    return os;
}

//---------------------------------------------------------------------------
// EXISTING_CODE
// EXISTING_CODE
