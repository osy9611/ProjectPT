# ProjectPT - Unreal Engine Toy Project

**ProjectPT**는 Unity에서 작업했던 경험을 바탕으로 Unreal Engine을 학습하며 제작한 토이 프로젝트입니다.  
Unity에서 사용했던 기술(예: TableGenerator, Addressable)과 Unreal의 시스템(GAS, Experience 등)을 비교 분석하며 적용한 과정과 결과를 정리했습니다.

**프로젝트 주요 내용**
- Unity의 시스템을 Unreal Engine에 맞게 변경 및 적용
- Unreal의 주요 시스템 (GAS, Experience, Subsystem 등) 학습 및 활용
- AI, UI, DataTable 등 다양한 기능 개발

🔗 **관련 문서**
- [ GitHub 위키](https://github.com/osy9611/ProjectPT/wiki)
- [ Unity 프로젝트 (ProjectT)](https://github.com/osy9611/ProjectT)

---

## 주요 시스템 개요

###  Gameplay Ability System (GAS)
- Unreal의 GAS 시스템을 활용하여 능력(스킬) 및 상태 효과를 관리
- **[Gameplay Ability System](https://github.com/osy9611/ProjectPT/wiki/Gameplay-Ability-System)**

### Experience 및 GameFeature
- Lyra의 Experience 시스템을 분석하여 게임 모드 관리 적용
- GameFeature를 활용하여 독립적인 기능 로드 및 활성화 구현
- **[Experience](https://github.com/osy9611/ProjectPT/wiki/Experience)**
- **[GameFeature](https://github.com/osy9611/ProjectPT/wiki/GameFeature)**

### AI 시스템
- AIComponent를 통한 AI 초기화 및 AttributeSet 관리
- AIController와 AI Perception을 이용한 감지 및 행동 패턴 구현
- **[AI System](https://github.com/osy9611/ProjectPT/wiki/AI)**

### UI 시스템
- Unity의 UIManager를 Unreal의 `UIManagerSubsystem`으로 변환
- `GameplayTag` 기반 UI Layer 관리 (Static, Dynamic, System)
- **[UI System](https://github.com/osy9611/ProjectPT/wiki/UISystem)**

### 데이터 관리 (DataTable & AssetManager)
- CSV 기반 DataTable 자동 생성 및 직렬화 저장
- Unreal의 AssetManager를 Addressable과 비교하여 리소스 관리 최적화
- **[DataTable](https://github.com/osy9611/ProjectPT/wiki/DataTable)**
- **[AssetManager](https://github.com/osy9611/ProjectPT/wiki/AssetManager)**

---
