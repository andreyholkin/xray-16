#pragma once

class CBlender_LmEbB : public IBlender
{
    string64 oT2_Name; // name of secondary texture
    string64 oT2_xform; // xform for secondary texture
    xrP_BOOL oBlend;

private:
    void CompileFFP(CBlender_Compile& C) const;
    void compile_ED(CBlender_Compile& C) const;
    void compile_2(CBlender_Compile& C) const;
    void compile_3(CBlender_Compile& C) const;
    void compile_L(CBlender_Compile& C) const;
    void CompileProgrammable(CBlender_Compile& C) const;

public:
    CBlender_LmEbB();
    ~CBlender_LmEbB() override = default;

    LPCSTR getComment() override;
    BOOL canBeLMAPped() override;
    void Save(IWriter& fs) override;
    void Load(IReader& fs, u16 version) override;

    void Compile(CBlender_Compile& C) override;
};
