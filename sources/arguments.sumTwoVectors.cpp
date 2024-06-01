// Doesn't actually do anything. v is passed by value so any modification will
// be lost when returned to caller context
void sumTwoVectors(vector<int> v, const vector<int>& crv) {
    auto i_v v.begin();
    auto i_crv = crv.begin();
    while (i_v != v.end() && i_crv != crv.end()) {
        (*i_v) += (*i_crv);
        i_v++;
        i_crv++;
    }
}

// adds contents of crv vector to rv vector. rv is modified in-place so we
// pass-by-reference. crv is not modified, but could very well be large so we
// pass by const reference.
void sumTwoVectors(vector<int>& rv, const vector<int>& crv) {
    auto i_v v.begin();
    auto i_rv = rv.begin();
    auto i_crv = crv.begin();
    while (i_v != v.end() && i_crv != crv.end()) {
        (*i_v) += (*i_crv);
        i_v++;
        i_crv++;
    }
    i_crv = crv.begin();
    while (i_rv != v.end() && i_crv != crv.end()) {
        (*i_rv) += (*i_crv);
        i_rv++;
        i_crv++;
    }
}
