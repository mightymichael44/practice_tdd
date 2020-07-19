node{
    stage('SCM Checkout'){
        git branch: 'jenkins_pipeline', credentialsId: '6e4d7ab7-5725-48c8-b9eb-4bccd91ae6ca', url: 'https://github.com/mightymichael44/practice_tdd.git', recursiveSubmodules: true

    }
    stage('Build'){
        cmakeBuild buildDir: 'build', cleanBuild: true, installation: 'InSearchPath'
    }
    stage('Unit tests'){
        'build/unit_test/test_game'
    }
}