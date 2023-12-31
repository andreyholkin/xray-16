#pragma once

class CBlender_Model : public IBlender
{
    xrP_TOKEN oTessellation;
    xrP_Integer oAREF;
    xrP_BOOL oBlend;

private:
    void CompileFFP(CBlender_Compile& C) const;
    void CompileProgrammable(CBlender_Compile& C) const;

public:
    CBlender_Model();
    ~CBlender_Model() override = default;

    LPCSTR getComment() override;
    void Save(IWriter& fs) override;
    void Load(IReader& fs, u16 version) override;

    void Compile(CBlender_Compile& C) override;
};
